#include <iostream>
using namespace std;
int main() {
  int n;
    cin >> n;
    cout << ((n-n%10)/10)%10;// put your code here
  return 0;
}