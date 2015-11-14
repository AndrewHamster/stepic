#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	vector <int> x(8), y(8);
	for(int i = 0; i < 8; i++){
		cin >> x[i] >> y[i];
	}
	int sw = 1;
	for(int i = 0; i < 8; i++){
		for(int j = i + 1; j < 8; j++){
			if(abs(x[i] - x[j]) == abs(y[i] - y[j]) || x[i] == x[j] || y[i] == y[j] ){
				sw = 0;
				break;
			}
			if(sw != 1){
				break;
			}
		}
	}
	if(sw != 1){
		cout << "YES";
	}	else	{
		cout << "NO";
	}
	return 0;
}