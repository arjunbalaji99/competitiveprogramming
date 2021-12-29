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
	
	int n; cin >> n;
	int xs[n];
	int ys[n];

	for (int i = 0; i < n; i++) {
		cin >> xs[i] >> ys[i];
	}
	int exc[4];

	int minx = 40000, maxx = 0, miny = 40000, maxy = 0;
	for (int i = 0; i < n; i++) {
		if (xs[i] < minx) {
			minx = xs[i];
			exc[0] = i;
		}
		if (xs[i] > maxx) {
			maxx = xs[i];
			exc[1] = i;
		}
		if (ys[i] < miny) {
			miny = ys[i];
			exc[2] = i;
		}
		if (ys[i] > maxy) {
			maxy = ys[i];
			exc[3] = i;
		}
	}
	long long minarea =  2147483647;
	for (int i = 0; i < 4; i++) {
		minx = 40000;
		miny = 40000;
		maxx = 0;
		maxy = 0;
		for (int j = 0; j < n; j++) {
			if (j == exc[i]) {
				continue;
			}
			else {
				minx = min(minx, xs[j]);
				miny = min(miny, ys[j]);
				maxx = max(maxx, xs[j]);
				maxy = max(maxy, ys[j]);	
			}
		}
		long long area = (maxx - minx) * (maxy - miny);
		minarea = min(minarea, area);		
	}

	cout << minarea;
}




