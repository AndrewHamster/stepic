#include <iostream>

using namespace std;

int main() {

  int n, h, m, s;
    cin >> n;
    s = n % 60;
    int s1 = s % 10; // друга цифра секунд
    int s0 = (s - s1) / 10; // перша цифра секунд
    m = ((n - s) / 60) % 60;
    int m1 = m % 10; // друга цифра хвилин
    int m0 = (m - m1) / 10; // перша цифра хвилин
    h = ((n - s - m * 60) /3600)%24;
	cout << h << ":" << m0 << m1 << ":" << s0 << s1 << endl;
  return 0;
}
