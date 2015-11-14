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
	
	// output
	for (int i = 0; i < n; i += 2){
		cout << a[i]<<" ";
	}
  return 0;
}