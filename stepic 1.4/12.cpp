#include <iostream>
using namespace std;
int main() {
  int n, m, x, y, xmin, ymin;
    cin >> n >> m >> x >> y;
    if (n < m){
        n = n + m;
        m = n - m;
        n = n - m;
    }
    if ((m - x) >= x)
        xmin = x;
    else xmin = m - x;
    if ((n - y) >= y)
        ymin = y;
    else ymin = n - y;
    if (xmin <= ymin)
        cout << xmin;
    else cout << ymin;
  return 0;
}