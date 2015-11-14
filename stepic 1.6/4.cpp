#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double k0, p;
	int x, y,  k1;
	cin >> p >> x >> y;
	p /= 100;
	k0=x*100 + y;
	k1 = k0 + trunc(k0*p);
	y= k1%100;
	x=(k1-y)/100;
	cout << x <<" "<< y;
  return 0;
}