#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string a;
    vector <string> n;
    getline(cin, a);
    int xpos = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 32){
            string t = a.substr(xpos, i - xpos);
            n.push_back(t);
            xpos = i + 1;
        }
        if(i == a.size() - 1){
            string t = a.substr(xpos);
            n.push_back(t);
        }
    }
    string t = n[0], mWord = n[0];
    int mlength = mWord.size();
    for(int i = 1; i < n.size(); i++){
        t = n[i];
        int length = t.size();
        if(length > mlength){
            mWord = t;
            mlength = length;
        }
    }
    cout << mWord;
    return 0;
}
