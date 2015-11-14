#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
	// input
	int n;
	cin >> n;
	vector <int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	// processing
	for (int i = 1; i < n; i++){
		if (a[i] > 0 && a[i-1] > 0 || a[i] < 0 && a[i-1] < 0){
			cout << a[i-1] << " " << a[i];
			break;
		}
	}
	// output

  return 0;
}