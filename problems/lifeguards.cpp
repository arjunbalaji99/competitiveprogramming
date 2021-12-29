#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("lifeguards.in", "r", stdin);
	freopen("lifeguards.out", "w", stdout);
	
	int n;
	cin >> n;

	int se[n][2];

	for (int i = 0; i < n; i++) {
		cin >> se[i][0];
		cin >> se[i][1];
	}

	int cover[1000] = {0};
	for(int i = 0; i < n; i++) {
		for(int t = se[i][0]; t < se[i][1]; t++) {
			cover[t]++;
		}
	}


	int max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = se[i][0]; j < se[i][1]; j++) {
			cover[j]--;
		}

		int covered = 0;
		for (int j = 0; j < 1000; j++) {
			if (cover[j] > 0) {
				covered++;
			}
		}

		if (covered > max) {
			max = covered;
		}

		for (int j = se[i][0]; j < se[i][1]; j++) {
			cover[j]++;
		}
	}

	cout << max;

}


