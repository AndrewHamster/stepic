#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[1000][1000];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[j][i];
		}
	}

	
	for(int j = 0; j < m; j++){
		for(int i = 0; i < n; i++){
			cout <<  a[j][i] << " ";
		}
		cout << endl;
	}
	
  return 0;
}