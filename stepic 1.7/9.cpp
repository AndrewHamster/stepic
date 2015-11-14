#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
	// input
	int n;
	
	cin >> n;
	
	vector <int> a(n);
	
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	// processing
	for (int i = 0; i < n-1; i += 2){
		int temp = a[i];
		a[i] = a[i + 1];
		a[i + 1] = temp;
	}
	// output
	
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	
  return 0;
}