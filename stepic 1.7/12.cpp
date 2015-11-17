#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
bool found(vector <int> a, int b){
    bool t = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == b){
            t = 1;
            break;
        }
    }
    return t;
}
int main(){
    int x;
    cin >> x;
    vector <int> a(x), sol;
    for(int i = 0; i < x; i ++){
        cin >> a[i];
    }
    for(int i = 0; i < x; i ++){
        int t = a[i];
        a[i] = 0;
        if(!found(a, t)){
            sol.push_back(t);
        }
        a[i] = t;
    }
    for(int i = 0; i < sol.size(); i ++){
        cout << sol[i] << " ";
    }
    return 0;
}
