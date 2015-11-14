#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	int n;
	double x, a, Px;
	cin >> n >> x >> a;
	Px=a;
	while(n > 0){
		cin >> a;
		Px=Px*x+a;
		n--;
	}
	cout << setprecision(6) << fixed;
	cout << Px;
  return 0;
}