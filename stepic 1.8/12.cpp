#include <iostream>

using namespace std;

int main() {
	int n , m;

	cin >> n >> m;

	int a[100][100];

	int c = 1;


	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j ++){
			if((i + j)%2 == 0){
				a[i][j] = c;
				c++;
			}	else	{
				a[i][j] = 0;
			}
		}
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

