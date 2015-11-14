#include <iostream>
using namespace std;
int main() {
  int n, max= -1;
    cin >> n;
    while (n != 0){
        if (max < n)
            max = n;
        cin >> n;
    }
    cout << max;
  return 0;
}