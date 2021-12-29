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
	
	int n, m; cin >> n >> m;

	int recordint[n];
	int recordrate[n];
	for (int i = 0; i < n; i++) {
		cin >> recordint[i] >> recordrate[i];
	}

	int bint[m];
	int brate[m];
	for (int i = 0; i < m; i++) {
		cin >> bint[i] >> brate[i];
	}

	int bessie = brate[0];
	int record = recordrate[0];
	int btime = bint[0];
	int rtime = recordint[0];
	int bindex = 1;
	int rindex = 1;
	int ans = 0;
	for (int t = 1; t <= 100; t++) {
		ans = max(ans, bessie - record);
		if (t == btime) {
			bessie = brate[bindex];
			btime += bint[bindex];
			bindex++;
		}
		if (t == rtime) {
			record = recordrate[rindex];
			rtime += recordint[rindex];
			rindex++;
		}
	}

	cout << ans;
}








