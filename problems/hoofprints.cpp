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
		string s; cin >> s;
		for (int j = 0; j < n; j++) {
			char c = s[j];
			int x = c - 48;
			grid[i][j] = x;
		}
	}

	bool numbers[9];
	for (int i = 0; i < 9; i++) {
		numbers[i] = false;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j] != 0) numbers[grid[i][j] - 1]  = true;
		}
	}

	for (int num = 0; num < 9; num++) {
		int rs = n, cs = n, re = -1, ce = -1;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (grid[i][j] == num + 1) {
					rs = min(rs, i);
					cs = min(cs, j);
					re = max(re, i);
					ce = max(ce, j);
				}
			}
		}
		
		for (int i = rs; i <= re; i++) {
			for (int j = cs; j <= ce; j++) {
				if (grid[i][j] != num + 1) {
					numbers[grid[i][j] - 1]  = false;
				}
			}
		}
	}

	int counter = 0;
	for (int i = 0; i < 9; i++) {
		if (numbers[i]) counter++;
	}

	cout << counter;
}








