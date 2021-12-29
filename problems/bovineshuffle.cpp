#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("shuffle.in", "r", stdin);
	freopen("shuffle.out", "w", stdout);
	
	int n;
	cin >> n;

	int ai[n];
	int cows[n];

	for (int i = 0; i < n; i++) {
		cin >> ai[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> cows[i];
	}

	for (int j = 0; j < 3; j++) {
		int temp[n];
		for (int i = 0; i < n; i++) {
			temp[i] = cows[i];
		}
		for (int i = 0; i < n; i++) {
			int x = ai[i];
			temp[i] = cows[x-1];

		}
		for (int i = 0; i < n; i++) {
			cows[i] = temp[i];
		}
	}

	for (int i = 0; i < n; i++) {
		cout << cows[i] << endl;
	}

}