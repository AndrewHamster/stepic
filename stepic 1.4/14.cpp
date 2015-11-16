#include <iostream>
using namespace std;
int main() {
int m, n, k, m1, n1, k1;
cin >> m >> n >> k >> m1 >> n1 >> k1;
int a, b, c;
if (m <= n && m <= k) {
if (n <= k) { a = m; b = n; c = k; }
else { a = m; b = k; c = n; }
}
else if (n <= m && n <= k) {
if (m <= k) { a = n; b = m; c = k; }
else { a = n; b = k; c = m; }
}
else if (k <= m && k <= n) {
if (m <= n) { a = k; b = m; c = n; }
else { a = k; b = n; c = m; }
}
// cout « a « " " « b « " " « c;
int a1, b1, c1;
if (m1 <= n1 && m1 <= k1) {
if (n1 <= k1) { a1 = m1; b1 = n1; c1 = k1; }
else { a1 = m1; b1 = k1; c1 = n1; }
}
else if (n1 <= m1 && n1 <= k1) {
if (m1 <= k1) { a1 = n1; b1 = m1; c1 = k1; }
else { a = n; b = k; c = m; }
}
else if (k1 <= m1 && k1 <= n1) {
if (m1 <= n1) { a1 = k1; b1 = m1; c1 = n1; }
else { a1 = k1; b1 = n1; c1 = m1; }
}
//cout « a1 « " " « b1 « " " « c1;
if (a == a1 && b == b1 && c == c1) { cout << "Boxes are equal"; }
else if (a <= a1 && b <= b1 && c <= c1) { cout << "The first box is smaller than the second one"; }
else if (a >= a1 && b >= b1 && c >= c1) { cout << "The first box is larger than the second one"; }
else { cout << "Boxes are incomparable"; }
return 0;
}
