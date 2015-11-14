#include <iostream>
using namespace std;
int main() {
  int n, h, m, s;
  string m0, s0;
    cin >> n;
    s = n % 60;
    m = ((n - s) /60 )%60;
    h = ((n - s - m * 60) /3600)%24;
	if (m<10)
		if (s<10)
			cout << h << ":0" << m << ":0" << s;
		else     cout << h << ":0" << m << ":" << s;
	else if (s<10)
			cout << h << ":" << m << ":0" << s;
		else     cout << h << ":" << m << ":" << s;
  return 0;
}