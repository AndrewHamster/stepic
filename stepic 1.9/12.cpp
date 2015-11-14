#include <iostream>
#include <cmath> // подключаем модель Векторов
using namespace std;
int Fib(int n){
    float fi = (pow((1 + sqrt(5)) / 2, n) - (pow((1 - sqrt(5)) / 2, n))) / sqrt(5);
    int s = (int) fi;
    return fi;
}
int main()
{
    int n;
    cin >> n;
    cout << Fib(n);
    return 0;
}
