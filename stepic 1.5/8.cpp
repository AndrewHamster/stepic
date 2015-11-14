#include <iostream>
using namespace std;
int main() {
  int n, max= -1, count;
    cin >> n;
    while (n != 0){
        if (max < n){
            max = n;
            count = 0;
        }
        if (max == n){
            count ++;
        }
        cin >> n;
    }
    cout << count;
  return 0;
}