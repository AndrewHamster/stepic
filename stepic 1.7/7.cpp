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
		int s=abs(temp);
		if (s%2 == 1)
			a.push_back(temp);
	}
	// processing
	if(a.size() > 0){
		int min=a[0];
		for (int i = 1; i < a.size(); i++){
			if (a[i] < min){
				min=a[i];
			}
		}
		cout << min;
	}	else cout << 0;
	// output
  return 0;
}