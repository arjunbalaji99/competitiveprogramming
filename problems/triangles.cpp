#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("triangles.in", "r", stdin);
	freopen("triangles.out", "w", stdout);
	
	int n;
	cin >> n;

	int x[n];
	int y[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	int max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				int area = 0;
				
				if (x[i] == x[k] && y[j] == y[i]) {
					area = abs((x[j] - x[i]) * (y[k] - y[i]));
				}

				if (area > max) {
					max = area;
				}
			}
		}
	}
	cout << max;
}


