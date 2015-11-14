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
	
	for(int j = 0; j < n - 1; j++){
		for(int i = j + 1; i < n; i++){
			if(a[i] == a[j])
				count++;
		}
	}
	
	cout << count;
	
  return 0;
}