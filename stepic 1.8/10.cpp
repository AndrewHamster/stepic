#include <iostream>

using namespace std;

int main() {
	int n , m;
	cin >> n >> m;
	int a[i], c = 1, dir = 1;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j += dir){
			if(dir == 1){
				a[i][j] = c++;
			}	else	{
				a[i][m-j] = c++;
			}
		}
		dir *= -1;
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cout.width(4);
			cout << a[i][j]; 
		}
		cout << endl;
	}
	
	return 0;
}