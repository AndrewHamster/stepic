#include <iostream>
#include <cmath>

using namespace std;

bool isInCircle(int x, int y){
    return sqrt(pow(x + 1, 2) + pow(y - 1, 2)) < 2;
}

bool isOnCircle(int x, int y){
    return sqrt(pow(x + 1, 2) + pow(y - 1, 2)) == 2;
}

bool isInUTr(int x, int y){
    return y >= -x && y >= 2 * x + 2;
}

bool isInLTr(int x, int y){
    return y <= -x && y <= 2 * x + 2;
}

bool isInArea(int x, int y){
    return (isInUtr(x, y) && (isInCircle(x, y) || isOnCircle(x, y))) ||
        (isInLTr(x, y) && (!isInCircle(x, y) || isOnCircle(x, y)));
}

int main(){
    int x, y;
    cin >> x >> y;
    if(isInArea(x, y) == true){
        cout << "YES";
    }   else    {
        cout << "NO";
    }
    return 0;
}
