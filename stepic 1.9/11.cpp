#include <iostream>
#include <cmath>

using namespace std;

int sum(){
	int n, s;
	cin >> n;
	s = n;
	if(n != 0){
		s += sum();
	}
	return s;
}

int main(){
	cout << sum();
	return 0;
}