#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[100][100];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[j][i];
		}
	}

	
	for(int j = 0; j < m; j++){
		for(int i = n - 1; i >= 0; i--){
			cout <<  a[j][i] << " ";
		}
		cout << endl;
	}
	
  return 0;
}