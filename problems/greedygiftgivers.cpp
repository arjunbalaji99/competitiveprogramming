/*
ID: arjunba2
PROG: gift1
LANG: C++                 
*/

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
	freopen("gift1.in", "r", stdin);
	freopen("gift1.out", "w", stdout);
	int np; cin >> np;
	
	unordered_map<string, int> m;
	string order[np];
	for (int i = 0; i < np; i++) {
		string s; cin >> s;
		m[s] = 0;
		order[i] = s;
	}
	for (int i = 0; i < np; i++) {
		string s; cin >> s;
		int money, people; cin >> money >> people;
	    if (money != 0 && people != 0) {
	        money/=people;
	    }
	    else {
	        continue;
	    }
		for (int j = 0; j < people; j++) {
			string person; cin >> person;
			m[person] = m[person] + money;
			m[s] = m[s] - money;
		}
	}
	
	for (int i = 0; i < np; i++) {
		cout << order[i] << " " << m[order[i]] << endl;
	} 


}






