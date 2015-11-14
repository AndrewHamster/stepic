#include <iostream>
using namespace std;
int main() {
  int n, d = 1;
    cin >> n;
    while (d < n){
        d *= 2;
    }
    if (d == n)
        cout << "YES" ;
    else cout << "NO";
  return 0;
}