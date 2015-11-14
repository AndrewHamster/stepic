#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    multiset<int> x;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        x.insert(t);
    }
    for(auto n : x){
        cout << n << " ";
    }
    return 0;
}
