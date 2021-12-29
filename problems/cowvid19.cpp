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

	int pos[n];
	for (int i = 0; i < n; i++) {
		cin >> pos[i];
	}	

	sort(pos, pos+n);

	int ans = 0;
	for (int i = 0; i < n; i++) {
		int infected[n];
		for (int j = 0; j < n; j++) {
			infected[j] = 0;
		}
		infected[i] = 1;

		int radius = 1;
		while (true) {
			bool infect = false;
			for (int j = 0; j < n; j++) {
				if (infected[j] == 1) {
					for (int k = 0; k < n; k++) {
						if (infected[k] == 0) {
							if (abs(pos[j] - pos[k]) <= radius) {
								infected[k] = 1;
								infected[j] = 2;
								infect = true;
							}
						}
					}
				}
			}
			if (infect == false) {
				break;
			}
			radius++;
		}

		int counter = 0;
		for (int j = 0; j < n; j++) {
			if (infected[j] > 0) counter++;
		}
		ans = max(counter, ans);
	}
	cout << ans;
	
}








