/*
ID: arjunba2
PROG: milk2
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

/*
struct Cow{ 
	int size, pos;
};

bool comp (Cow c1, Cow c2){
    if (c1.pos < c2.pos)//> = decreasing,  < = increasing
        return true;
    return false;
}
*/


int main() {
	//freopen("milk2.in", "r", stdin);
	//freopen("milk2.out", "w", stdout);

	int grid[2001][2001];
	for (int i = 0; i < 2001; i++) {
		for (int j = 0; j < 2001; j++) {
			grid[i][j] = -1;
		}
	}

	int n; cin >> n;	
	int x = 1001;
	int time = 0;
	int curx = 1000, cury = 1000;
	for (int i = 0; i < n; i++) {
		char c; cin >> c;
		int s; cin >> s;

		int hor = 0, ver = 0;
		if (c == 'N') {
			ver++;
		}
		else if (c == 'S') {
			ver--;
		}
		else if (c == 'E') {
			hor++;
		}
		else {
			hor--;
		}

		for (int j = 0; j < s; j++) {
			time++;
			curx += hor;
			cury += ver;
			if (grid[curx][cury] != -1) {
				x = min(time - grid[curx][cury], x);
			}
			grid[curx][cury] = time;
		}
	}

	if (x == 1001) {
		cout << -1;
		return 0;
	}
	cout << x;
}








