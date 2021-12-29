#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	string black[n];
	string white[n];

	for (int i = 0; i < n; i++) {
		cin >> black[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> white[i];
	}

	int counter = 0;

	

	for (int i = 0; i < m; i++) {
		bool flag = true;
		bool a = false;
		bool c = false;
		bool g = false;
		bool t = false;
		for (int j = 0; j < n; j++) {
			if (black[j][i] == 'A') {
				a = true;
			}
			if (black[j][i] == 'C') {
				c = true;
			}
			if (black[j][i] == 'G') {
				g = true;
			}
			if (black[j][i] == 'T') {
				t = true;
			}
		}
		bool a1 = false;
		bool c1 = false;
		bool g1 = false;
		bool t1 = false;
		for (int j = 0; j < n; j++) {
			if (white[j][i] == 'A') {
				a1 = true;
			}
			if (white[j][i] == 'C') {
				c1 = true;
			}
			if (white[j][i] == 'G') {
				g1 = true;
			}
			if (white[j][i] == 'T') {
				t1 = true;
			}
		}

		if (a == true && a1 == true) {
			flag = false;
		}
		if (c == true && c1 == true) {
			flag = false;
		}
		if (g == true && g1 == true) {
			flag = false;
		}
		if (t == true && t1 == true) {
			flag = false;
		}

		if (flag == true) {
			counter++;
		}
	}

	cout << counter;
}


