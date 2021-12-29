#include <bits/stdc++.h>
using namespace std;

int times[2000][2000];

int main() {
	freopen("mowing.in", "r", stdin);
	freopen("mowing.out", "w", stdout);

	int n;
	cin >> n;

	for (int i = 0; i < 2000; i++) {
		for (int j = 0; j < 2000; j++) {
			times[i][j] = -1;
		}
	}
	int ans = 1001;	
	int x = 1000;
	int y = 1000;
	times[x][y] = 0;
	int currenttime = 0;

	for (int i = 0; i < n; i++) {
		char dir;
		int steps;
		cin >> dir >> steps;
		int xm = 0;
		int ym = 0;
		if (dir == 'N') {
			ym = 1;
		}
		else if (dir == 'S') {
			ym = -1;
		}
		else if (dir == 'W') {
			xm = -1;
		}
		else {
			xm = 1;
		}

		for (int j = 0; j < steps; j++) {
			currenttime++;
			x+=xm;
			y+=ym;
			if (times[x][y] != -1) {
				if ((currenttime - times[x][y]) < ans) {
					ans = currenttime - times[x][y];
				}
			}
			times[x][y] = currenttime;
		}
	}
	if (ans == 1001) {
		cout << -1;
	}
	else {
		cout << ans;
	}
	
}


