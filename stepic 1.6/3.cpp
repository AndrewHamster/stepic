#include <iostream>
#include <cmath>
using namespace std;
double heron(double a, double b, double c){
	double p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main() {
  double a, b, c, s;
    cin >> a >> b >> c;
	s=heron(a, b, c);
	cout << s;
  return 0;
}