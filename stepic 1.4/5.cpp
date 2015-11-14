#include <iostream>
using namespace std;
int main() {
  int a, b, c, count = 0;
    cin >> a >> b >> c;
    if (a != b && a != c && b != c)
        cout << 0;
    else if (a == b && a == c)
             cout << 3;
        else cout << 2;
    

  return 0;
}