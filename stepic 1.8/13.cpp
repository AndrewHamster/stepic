#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int n, m, a[50][50];
    cin >> n >> m;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            a[i][j] = -1;
        }
    }
    int dir = 0, di = 0, dj = 1, i = 0, j = 0;
    for(int c = 1; c <= n * m; c++){
        if (a[i][j] == -1){
            a[i][j] = c;
        }
        if(a[i + di][j + dj] != -1){
            dir = (dir + 1) % 4;
        }
        switch (dir){
            case 0 :
                di = 0;
                dj = 1;
                break;
            case 1 :
                di = 1;
                dj = 0;
                break;
            case 2 :
                di = 0;
                dj = -1;
                break;
            case 3 :
                di = -1;
                dj = 0;
                break;
            default :
                break;
        }
        i +=di;
        j +=dj;
    }
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            cout.width(4);
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
