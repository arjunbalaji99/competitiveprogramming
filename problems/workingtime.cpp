/*
ID: arjunba2
PROG: milk2
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
	//freopen("milk2.in", "r", stdin);
	//freopen("milk2.out", "w", stdout);
	
	int n, q; cin >> n >> q;

	int tasks[n];
	for (int i = 0; i < n; i++) {
		cin >> tasks[i];
	}

	int questions[q];
	for (int i = 0; i < q; i++) {
		cin >> questions[i];
	}

	for (int i = 0; i < q; i++) {
		int time = questions[i];
		int timern = 0;
		for (int j = 0; j < n; j++) {
			timern += tasks[j];
			if (time < timern) {
				cout << j+1 << endl;
				break;
			}
		}
	}
}




