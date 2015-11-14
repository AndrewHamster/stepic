#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct man {
    int num, points;
};

bool cmp(man a, man b) {
    if(a.points == b.points){
		return a.num < b .num;
	}	else
	return a.points > b.points;
}

int main() {
    int n;
    cin >> n;
    vector <man> a(n);
    for (int i = 0; i < n; i++) {
        int tnum, tpoints;
        cin >> tnum >> tpoints;
        man tmp; // временная структура
        tmp.num = tnum;
        tmp.points = tpoints;
        a[i] = tmp; // создание пары значение - номер
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < a.size(); i++) {
        man now = a[i];
		cout << now.num << " " << now.points << endl;
    }
    return 0;
}