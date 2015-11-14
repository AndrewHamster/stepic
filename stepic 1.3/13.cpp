#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, a[4];
/* 	for(int i = 0; i < 4; i++){
		a[i] = 0;
	} */
	cin >> n;
	for(int i = 0; i < 4; i++){
		a[i] = n % 10;
		n /=10;
		//cout << a[i] << " ";
	}
	if(a[0] == a[3] && a[1] == a[2]){
		cout << 1;
	}	else {
		cout << 1999;
	}
}