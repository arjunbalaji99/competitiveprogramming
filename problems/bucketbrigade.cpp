#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
	freopen("buckets.in", "r", stdin);
	freopen("buckets.out", "w", stdout);
	
	int bx, by, rx, ry, lx, ly;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			char c;
			cin >> c;
			if (c == 'B') {
				bx = i;
				by = j;
			}
			if (c == 'R') {
				rx = i;
				ry = j;
			}
			if (c == 'L') {
				lx = i;
				ly = j;
			}
		}
	}

	int cows = abs(bx - lx) + abs(by - ly) - 1;

	if ((bx == lx && lx == rx) && ((ry < by && ry > ly) || (ry > by && ry < ly))) {
		cows+=2;
	}
	else if ((by == ly && ly == ry) && ((rx < bx && rx > lx) || (rx > bx && rx < lx))) {
		cows+=2;
	}
	
	cout << cows;
}