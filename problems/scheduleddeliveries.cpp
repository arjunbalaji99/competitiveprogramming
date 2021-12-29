/*
ID: arjunba2
PROG: milk2
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

/*
struct Cow{ 
	int source;
	int des;
	int dir;
};

bool comp (Cow c1, Cow c2){
    if (c1.source < c2.source)//> = decreasing,  < = increasing
        return true;
    return false;
}
*/


int main() {
	//freopen("milk2.in", "r", stdin);
	//freopen("milk2.out", "w", stdout);
	
	int n; cin >> n;

	int intervals[n];
	for (int i = 0; i < n; i++) {
		intervals[i] = 5000000;
	}

	int counter = 0;
	for (int i = 0; i < n; i++) {
		int day; cin >> day;
		day -= 1;
		bool found = false;
		for (int j = 0; j < n; j++) {
			if (day % intervals[j] == 0) {
				found = true;
			}
		}
		if (found == false) {
			intervals[i] = day;
			counter++;
		}		
	}

	cout << counter;

	
}




