#include <iostream>
using namespace std;
int main() {
  int a, b, c, n;
    cin >>n;
    c=n%10;
    b=((n-c)/10)%10;
    a=(n-b*10-c)/100;
    cout <<a+b+c;
  return 0;
}