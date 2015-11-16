#include <iostream>

using namespace std;

int main(){
    int prev, n, c;
    cin >> prev >> n;
    if(n == 0){
        cout << 1;
        return 0;
    }
    int combo = 1;
    int max = 1;
    while(n != 0){
        if(n == prev){
            combo ++;
        }   else    {
            combo = 1;
        }
        if(max < combo){
            max = combo;
        }
        prev = n;
        cin >> n;
    }
    cout << max;
    return 0;
}
