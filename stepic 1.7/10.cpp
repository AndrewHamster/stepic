#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
	// input
	int n;
	
	cin >> n;
	
	vector <int> a(n+1);
	
	a[0]=0;
	
	for (int i = 1; i < n + 1; i++){
		cin >> a[i];
	}
	// processing
	a[0] = a[n];
	// output
	
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	
  return 0;
}