#include <iostream>
using namespace std;
int main() {
  int n, i = 0, sum;
    cin >> n;
    sum = 0;
    while (n != 0){
        sum += n;
        i++;
        cin >> n;
    }
    cout << sum;
  return 0;
}