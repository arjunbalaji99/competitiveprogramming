#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("cbarn.in", "r", stdin);
	freopen("cbarn.out", "w", stdout);
	
	int n;
	cin >> n;

	int r[n];
	for (int i = 0; i < n; i++) {
		cin >> r[i];
	}
	int mindis = 2147483647;
	for (int i = 0; i < n; i++) {
		int counter = i;
		int dis = 0;
		int rooms = 0;
		for (int j = 1; j < n; j++) {
			if (counter == n-1) {
				counter = -1;
			}
			dis += (r[counter+1]) * j;
			counter++;

		}
		if (dis < mindis) {
			mindis = dis;
		}
	}

	cout << mindis;
	
}
