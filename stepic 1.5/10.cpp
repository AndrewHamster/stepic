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
  int n, fn;
    cin >> n;
    fn=fib(n-1);
    cout << fn;// put your code here
  return 0;
}