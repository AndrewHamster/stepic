#include <iostream>
#include <string>
#include <vector>
using namespace std;
int Stoi(string s){
    vector <int> n;
    for(int i = 0; i < s.size(); i++){
        n.push_back(s[i] - '0');
    }
    int integer = 0, k = 10;
    int t = n.size() - 1;
    for (int i = 0; i < n.size(); i++){
        t = n.size();
        integer += n[t-i-1] * k;
        k *= 10;
    }
    return integer/10;
}
int main() {
        string a;
        getline(cin, a);
        if(a.size() > 15 || a.size() < 7){
            cout << "NO";
            return 0;
        }
        for(int i = 0; i < a.size(); i++){
            if(a[i] != 46 && (a[i] < '0' || a[i] > '9')){
                cout << "NO";
                return 0;
            }
        }
        int k = 0, dots[15];
        for(int i = 0; i < a.size(); i++){
            if(a[i] == '.'){
                dots[k] = i;
                k++;
            }
        }
        if(k != 3){
            cout << "NO";
            return 0;
        }
        if(dots[0] == 0 || dots[2] == a.size() - 1){
            cout << "NO";
            return 0;
        }
        int xpos = 0;
        vector<int> num;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == '.'){
                    if(i - xpos == 0){
                        cout << "NO";
                        return 0;
                    }
                string temp = a.substr(xpos, i - xpos);
                int j = Stoi(temp);
                num.push_back(j);
                xpos = i + 1;
                k--;
            }
            if(k == 0){
                string temp = a.substr(xpos, i - xpos);
                int j = Stoi(temp);
                num.push_back(j);
            }
        }
        for(int i = 0; i < num.size(); i++){
            if(num[i] >= 0 && num[i] < 256){
                continue;
            }   else    {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
        return 0;
}
