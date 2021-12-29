#include <bits/stdc++.h>
using namespace std;

#define ll long long



int main() {
	freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);
	
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int overlap;
	if (a >= c) {
		if (a < d) {
			if (b > d) {
				overlap = d-a;
			}
			else {
				overlap = b-a;
			}
		}
	}
	else {
		if (c < b) {
			if (d > b) {
				overlap = b-c;
			}
			else {
				overlap = d-c;
			}
		}	
	}

	cout << (b-a) + (d-c) - overlap;

}