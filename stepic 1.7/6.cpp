#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
	// input
	int n;
	cin >> n;
	vector <int> a;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		if (temp > 0)
			a.push_back(temp);
	}
	// processing
	int min=a[0];
	for (int i = 1; i < a.size(); i++){
		if (a[i] < min){
			min=a[i];
		}
	}
	// output
	cout << min;
  return 0;
}