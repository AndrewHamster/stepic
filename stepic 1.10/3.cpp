#include <iostream>
#include <cmath>
using namespace std;

int main() {
	char c;
	cin >> c;
	if(c >= 'a' && c <= 'z'){
        c += ('A' - 'a') ;
        cout << c;
	}   else    {
        if(c >= 'A' && c <= 'Z'){
            c -= ('A' - 'a');
            cout << c;
        }   else    {
            cout << c;
        }
	}
  return 0;
}
