#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
struct p {
	int x, y;
	double d;
};

bool cmp(p a, p b){
	return a.d < b.d;
}
int main() {
	int n;
	cin >> n ;
	vector <p> arr(n);
	for (int i = 0; i < n; i++){
		p tp;
		int tx, ty;
		cin >> tx >> ty;
		tp.x = tx;
		tp.y = ty;
		tp.d = sqrt(pow(tx, 2) + pow(ty, 2));
		arr[i] = tp;
	}
	sort(arr.begin(), arr.end(), cmp);
	for(int i = 0; i < n; i++){
		p t = arr[i];
		cout << t.x << " " << t.y << endl;
	}
	return 0;
}