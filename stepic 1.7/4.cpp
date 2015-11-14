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
		if (a[i] > a[i-1])
			cout << a[i] << " ";
	}
	// output

  return 0;
}