#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> a;
    int n;
    cin >> n;
    while(n != 0){
        a.push_back(n);
        cin >> n;
    }

    vector <int> is;

    for(int i = 1; i < a.size() - 1; i++){
        if(a[i] > a[i-1] && a[i] > a[i+1]){
            is.push_back(i);
        }
    }
    if(is.size() < 2){
        cout << 0;
        return 0;
    }
    int md = is[1] - is[0];
    for(int i = 2; i < is.size(); i++){
        if(is[i] - is[i-1] < md){
            md = is[i] - is[i-1];
        }
    }
    cout << md;
    return 0;
}
