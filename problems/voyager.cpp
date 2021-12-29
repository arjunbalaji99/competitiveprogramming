/*
ID: arjunba2
PROG: milk2
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

/*
struct Cow{ 
	int piece[n][n]
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

	int n, m; cin >> n >> m;

	char grid[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> grid[i][j];
		}
	}

	int pr, pc; cin >> pr >> pc;

	string directions = "URDL";
	
	int curx = pr-1, cury = pc-1;
	int maxdis = 0;
	char maxdir;
	for (int i = 0; i < 4; i++) {
		char startd = directions[i];
		int dis = 0;

		curx = pr-1, cury = pc-1;
		char curd = startd;
		while (true) {
			dis++;
			if (curd == 'U') {
				curx -= 1;
				if (curx < 0) {
					break;
				}
				if (grid[curx][cury] == '/') {
					curd = 'R';
				}
				else if (grid[curx][cury] == '\\') {
					curd = 'L';
				}
				else if (grid[curx][cury] == 'C') {
					break;
				}
			}
			else if (curd == 'D') {
				curx += 1;
				if (curx == n) {
					break;
				}
				if (grid[curx][cury] == '/') {
					curd = 'L';
				}
				else if (grid[curx][cury] == '\\') {
					curd = 'R';
				}
				else if (grid[curx][cury] == 'C') {
					break;
				}
			}
			else if (curd == 'R') {
				cury += 1;
				if (cury == n) {
					break;
				}
				if (grid[curx][cury] == '/') {
					curd = 'U';
				}
				else if (grid[curx][cury] == '\\') {
					curd = 'D';
				}
				else if (grid[curx][cury] == 'C') {
					break;
				}
			}
			else if (curd == 'L') {
				cury -= 1;
				if (cury < 0) {
					break;
				}
				if (grid[curx][cury] == '/') {
					curd = 'D';
				}
				else if (grid[curx][cury] == '\\') {
					curd = 'U';
				}
				else if (grid[curx][cury] == 'C') {
					break;
				}
			}

			if (dis > 100000) {
				cout << startd << endl << "Voyager";
				return 0;
			}
		}
		if (dis > maxdis) {
			maxdis = dis;
			maxdir = startd;
		}
	}

	cout << maxdir << endl << maxdis;



}








