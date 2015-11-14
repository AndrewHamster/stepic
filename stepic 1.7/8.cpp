#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
	// input
	int n, temp, count=0;
	
	cin >> n;
	
	vector <int> a(n);
	
	cin >> a[0];
	
	temp=a[0];
	
	count++;
	
	for (int i = 1; i < n; i++){
		cin >> a[i];
		if(a[i] != temp) {
			temp = a[i];
			count++;
		}
		
	}
	// processing

	// output
	
	cout << count;
	
  return 0;
}