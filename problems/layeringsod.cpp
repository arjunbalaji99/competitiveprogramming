#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);

	int x, y, a;
	cin >> x >> y >> a;
	bool grid[x][y];

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			grid[i][j] = false;
		}
	}
	int counter = 0;
	for (int i = 0; i < a; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		for (int i = x1-1; i < x2; i++) {
			for (int j = y1-1; j < y2; j++) {
				if (grid[i][j] == false) {
					grid[i][j] = true;
					counter++;
				}
			}
		}
	}
	cout << counter;
}


