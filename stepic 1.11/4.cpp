#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> x;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        x.insert(t);
    }
    int m;
    cin >> m;
    set<int> y, z;
    for(int i = 0; i < m; i++){
        int t;
        cin >> t;
        y.insert(t);
        if(x.find(t) != x.end() && y.find(t) != y.end()){
            z.insert(t);
        }
    }
    for(auto now : z){
        cout << now <<" ";
    }
    return 0;
}
