#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;

	int limit[n][2];
	int trip[m][2];

	for (int i = 0; i < n; i++) {
		cin >> limit[i][0];
		cin >> limit[i][1];
	}

	for (int i = 0; i < m; i++) {
		cin >> trip[i][0];
		cin >> trip[i][1];
	}

	int max = 0;
	int limits = limit[0][1];
	int speed = trip[0][1];
	int miles = limit[0][0];
	int miles1 = trip[0][0];
	int counter = 1;
	int counter1 = 1;
	int ans = 0;

	for (int i = 1; i <= 100; i++) {
		if (i > miles) {
			miles += limit[counter][0];
			limits = limit[counter][1];
			counter++; 
		}
		if (i > miles1) {
			miles1 += trip[counter1][0];
			speed = trip[counter1][1];
			counter1++;
		}

		if (speed > limits) {
			ans = (speed-limits);
		}

		if (ans > max) {
			max = ans;
		}
	}

	cout << max;
}