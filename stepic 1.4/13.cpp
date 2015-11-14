#include <iostream>
int f(int a, int b){
    if (a>b)
        return b;
    else return a;
}
int l(int a, int b){
    if (a<b)
        return b;
    else return a;
}
using namespace std;
int main() {
    int a, b, c, min, mid, max;
    cin >> a >> b >> c;
    min=f(f(a, b), c);
    max=l(l(a, b), c);
    if (a == min && b == max || a == max && b == min)
        mid = c;
    else if (a == min && c == max || a == max && c == min)
        mid = b;
        else mid = a;
    cout << min <<" "<< mid<<" " << max;
  return 0;
}