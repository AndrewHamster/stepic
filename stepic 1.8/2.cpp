#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[100][100];
	// input;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			a[i][j] = 0;
		}
	}
	// diagonals
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j){
				a[i][j] = 1;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i + j + 1 == n){
				a[i][j] = 1;
			}
		}
	}
	
	//middle lines
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == (n - 1) / 2 || j == (n - 1) / 2){
				a[i][j] = 1;
			}
		}
	}
	
	// output
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] == 1){
				cout << "*";
			}	else {
				cout << ".";
			}
			cout << " ";
		}
		cout << endl;
	}
	
  return 0;
}