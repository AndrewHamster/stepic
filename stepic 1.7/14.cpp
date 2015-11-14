#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		a[i] = 1;
	}
	for(int i = 0; i < k; i++){
		int l, r;
		cin >> l >> r;
		for(int j = l - 1; j < r; j++){
			a[j] = 0;
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i] == 1){
			cout << "I";
		}	else{
			cout << ".";
		}
	}
}