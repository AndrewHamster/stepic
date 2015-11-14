#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
	// input
	int n, count=0;
	cin >> n;
	vector <int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	// processing
	for (int i = 0; i < n; i++){
		if (a[i] > 0)
			count ++;
	}
	// output
	cout << count;
  return 0;
}