#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m;
	int a[n][m];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}

	cin >> k;
	
	int trig = 0, row = 0;
	
	for(int i = 0; i < n; i++){
		int combo = 0;
		for(int j = 0; j < m; j++){
			if (a[i][j] == 0){
				combo++;
			}	else {
				combo = 0;
			}
			if (combo == k) {
				trig ++;
				row = i + 1;
				break;
			}
		}
		if (trig != 0){
			break;
		}
		combo = 0;
	}

	cout << row;
	
  return 0;
}