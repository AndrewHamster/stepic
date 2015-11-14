#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, m, x, y;
	cin >> n >> m;
	int a[100][100];
	// input;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	
	cin >> x >> y;
	
	for(int i = 0; i < n; i++){
		for(int j = x; j <= x; j++){
			int temp = a[i][j];
			a[i][j] = a[i][y];
			a[i][y] = temp;
		}
	}
	
	// output
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	
  return 0;
}