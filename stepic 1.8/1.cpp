#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int a[100][100];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	
	int max= a[0][0];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] > max){
				max = a[i][j];
			}
		}
	}
	int trig = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == max){
				cout << i << " " << j;
				trig = 1;
				break;
			}
		}
		if (trig == 1){
			break;
		}
	}
	
  return 0;
}