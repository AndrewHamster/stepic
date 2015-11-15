#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

struct man {
	string name, surname;
	int x, y, z, num;
	double mid;
};

bool cmp(man a, man b){
	if(a.mid == b.mid){
		return a.num < b.num;
	}	else
	return a.mid > b.mid;
}

int main() {
	int n;
	
	cin >> n ;
	
	vector <man> arr(n);
	
	for (int i = 0; i < n; i++){
		man temp;
		string tn, ts;
		int tx, ty, tz;
		
		cin >> ts >> tn;
		cin >> tx >> ty >> tz;
		
		temp.surname = ts;
		temp.name = tn;
		
		temp.x = tx;
		temp.y = ty;
		temp.z = tz;
		temp.mid = (tx + ty + tz) / 3;
		temp.num = i;
		
		arr[i] = temp;
	}
	
	sort(arr.begin(), arr.end(), cmp);
	
	for(int i = 0; i < n; i++){
		man t = arr[i];
		cout << t.surname << " " << t.name << endl;
	}
	
	return 0;
}