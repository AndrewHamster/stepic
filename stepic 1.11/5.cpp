#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
        map <string, string> words;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            string t1, t2;
            cin >> t1 >> t2;
            words[t1] = t2;
            words[t2] = t1;
        }
        string word;
        cin >> word;
        cout << words[word];
}
