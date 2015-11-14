#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, nmax;
  vector <int> a;
    cin >> n;
    while (n != 0){
        a.push_back(n);
        cin >> n;
    }
	int max = a[0], j = 0;
	for(int i = 1; i < a.size(); i++){
		if(max < a[i]){
			max = a[i];
			j = i;
		}
	}
	a[j] = -1;
	nmax = a[0];
	for(int i = 1; i < a.size(); i++){
		if(nmax < a[i]){
			nmax = a[i];
		}
	}
    cout << nmax;
  return 0;
}