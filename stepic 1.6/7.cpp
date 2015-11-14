#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	double s, i=0, sigma, o;
	int sum=0, n, sqrsum=0;
	cin >> n;
	while(n != 0){
		sum += n;
		sqrsum += n*n;
		i++;
		cin >> n;
	}
	s = sum/i;
	sigma=sqrt(((sqrsum - 2 * s * sum + s*s*i))/(i-1));
	cout << setprecision(11) << fixed ;
	cout << sigma ;
  return 0;
}