#include <iostream>
#include <cmath>
using namespace std;
/* int min(int a, int b){
	if(a>b)
		return b;
	else return a;
}
int min4(int a, int b, int c, int d){
	return min(min(a, b), min(c, d));
} */
double distance(double x1, double y1, double x2, double y2){
	return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}
int main() {
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << distance(a, b, c, d);
	
  return 0;
}