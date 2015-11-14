#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	double mid;
	int sum=0, n, i=0;
	cin >> n;
	while(n != 0){
		sum += n;
		i++;
		cin >> n;
	}
	cout << setprecision(11) << fixed ;
	cout << (double) sum/i;
  return 0;
}