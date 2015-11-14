#include <iostream>
using namespace std;
int fib(int n){
    int n0=0, n1=1, N;
    if (n+1==0)
        N=0;
    else if (n+1==1 || n+1==2)
        N=1;
        else while(n > 0){
                N=n1+n0;
                n0=n1;
                n1=N;
                n--;
            }
    return N;
}
int main() {
  int n, fn, i=0, c=0;
    cin >> n;
	if (n==0)
		cout << 0;
	else
	while (fib(i) <= n){
		if(fib(i)==n){
			cout << i+1;
			c=1;
			break;
		}
		i++;
	}
	if (c != 1)
		cout << -1;
  return 0;
}