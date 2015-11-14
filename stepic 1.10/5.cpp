#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int cswitch = 1;
	for(int i = 0; i < s.size() / 2; i++){
        if(s[i] != s[s.size() - (i + 1)]){
            cswitch = 0;
            break;
        }
	}
	if(cswitch == 1){
        cout << "yes";
	}   else    {
        cout << "no";
	};
  return 0;
}
