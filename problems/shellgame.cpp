#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);
	
	int n;
	cin >> n;
	
	int swaps[n][3];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> swaps[i][j]; 
		}
	}
	int maxcount = 0;
	for (int i = 1; i <= 3; i++) {
		int counter = 0;
		int location = i;
		for (int j = 0; j < n; j++) {
			if (swaps[j][0] == location) {
				location = swaps[j][1];
			}
			else if (swaps[j][1] == location) {
				location = swaps[j][0];
			}

			if (location == swaps[j][2]) {
				counter++;
			}
		}

		if (maxcount < counter) {
			maxcount = counter;
		}

	}

	cout << maxcount;
}