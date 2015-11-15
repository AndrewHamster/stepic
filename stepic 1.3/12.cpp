#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int v, t;
  cin >> v >> t;
  int a = abs(v * t);
  if(v > 0){
    cout << a % 109;
  } else    {
    cout << (109 - (a % 109)) % 109;
  }
  return 0;
}
