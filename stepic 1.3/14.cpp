#include <iostream>
using namespace std;
int main(){
	int h, a, b, n=1, h0=0;;
	cin >> h >> a >> b;
	h0 +=a;
	while(h0<h){
		h0 = h0 - b + a;
		n++;
	}
	cout << n;
}
