#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int n){
	int min = -1;
	for(int i = 2; i <= (double)sqrt(n); i++){
		if(n % i == 0){
			min = i;
			break;
		}
	}
	return min == -1;

}

int main(){
	int n;
	cin >> n;
	if(IsPrime(n)){
		cout << "YES";
	}	else {
		cout << "NO";
	}
	return 0;
}