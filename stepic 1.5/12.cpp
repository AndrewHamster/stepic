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
    int c = 0;
    for(int i = 1; i < a.size() - 1; i++){
        if(a[i] > a[i-1] && a[i] > a[i+1]){
            c++;
        }
    }
    cout << c;
    return 0;
}
