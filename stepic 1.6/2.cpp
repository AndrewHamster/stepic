#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double x;
    cin >> x;
	x *=10;
	x = trunc(x);
	x = fmod(x, 10);
    cout << x;
  return 0;
}