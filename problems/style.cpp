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

	 int n; cin >> n;

	 int grid[n][n];
	 for (int i = 0; i < n; i++) {
	 	for (int j = 0; j < n; j++) {
	 		cin >> grid[i][j];
	 	}
	 }

	 int maxsize = -20000000;
	 for (int r = 0; r < n; r++) {
	 	for (int c = 0; c < n; c++) {
	 		for (int s = 1; s <= n - max(r, c); s++) {
	 			int a = 0, b = 0;

	 			for (int i = 0; i < s; i++) {
	 				a += grid[r + i][c + i];
	 			}

	 			for (int i = 0; i < s; i++) {
	 				b += grid[r + i][c + s - 1 - i];
	 			}

	 			int style = a - b;

	 			maxsize = max(style, maxsize);
	 		}
	 	}
	 }

	 cout << maxsize;
}








