#include <iostream>
#include <cmath>

using namespace std;

double power(double a, int n){
	double d = 1;
	
	if(n != 0){
		if (n > 0){
			for(int i = 0; i < n; i++){
				d *= a;
			}
		}	else {
			d = 1/power(a, -n);
		}
	}	else	{
		d = 1;
	}
	return d;
}

int main(){
	double a;
	int n;
	cin >> a >> n;
	cout << power(a, n);
	return 0;
}