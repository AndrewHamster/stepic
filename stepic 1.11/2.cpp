#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(s.find(x) !=  s.end()){
            cout << "YES\n" ;
        }   else    {
            s.insert(x);
            cout << "NO\n";
        }
    }
    return 0;
}
