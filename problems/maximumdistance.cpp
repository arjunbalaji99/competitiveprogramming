#include <bits/stdc++.h>
using namespace std;


int main() {
	//freopen("lifeguards.in", "r", stdin);
	//freopen("lifeguards.out", "w", stdout);
	
	int n;
	cin >> n;

	int xs[n];
	int ys[n];

	for (int i = 0; i < n; i++) {
		cin >> xs[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> ys[i];
	}

	int max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int dis = (xs[i]-xs[j]) * (xs[i]-xs[j]) + (ys[i]-ys[j]) * (ys[i]-ys[j]);
			if (max < dis) {
				max = dis;
			}
		}
	}

	cout << max;

}


