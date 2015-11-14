#include <iostream>
using namespace std;
int main() {
  int a, b, n, k, A, B;
    cin >> a >> b >> n;
    k = (a * 100 + b) * n;
    B= k % 100;
    A= ( k - B ) / 100;
    cout << A << " " << B;
  return 0;
}