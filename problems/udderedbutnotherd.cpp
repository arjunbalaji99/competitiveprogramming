#include <bits/stdc++.h>
using namespace std;

/*
struct Cow{ 
	string name;
	int milk;
};

bool comp (Cow c1, Cow c2){
    if (c1.milk < c2.milk)//> = decreasing,  < = increasing
        return true;
    return false;
}
*/


int main() {
	//freopen("outofplace.in", "r", stdin);
	//freopen("outofplace.out", "w", stdout);

	string order; cin >> order;
	string s; cin >> s;

	int ans = 0;
	int prev = -1;
	for (int i = 0; i < s.length(); i++) {
		int index = 0;
		if (prev == -1) {
			prev = order.find(s[0]);
			ans++;
		}
		else {
			index = order.find(s[i]);
			if (index <= prev) {
				ans++;
				prev = index;
			}
			else {
				prev = index;
			}
		}
	}

	cout << ans;

	
}






