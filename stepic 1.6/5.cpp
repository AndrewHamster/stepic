#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double k0, p;
	int x, y,  k1, k;
	cin >> p >> x >> y >> k;
	p /=100;
	k0=x*100 + y;
	k1=k0;
		while(k>0){
			k1 = k1 + trunc(k1*p);
			k--;
		}
	y= k1%100;
	x=(k1-y)/100;
	cout << x <<" "<< y;
  return 0;
}