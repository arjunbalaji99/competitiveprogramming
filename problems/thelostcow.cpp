#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("lostcow.in", "r", stdin);
	freopen("lostcow.out", "w", stdout);
	
	int x, y;
	cin >> x >> y;

	int m = 1;
	bool right = true;
	int totald = 0;
	int originalpos = x;
	int currentpos = x;

	while (true) {
		if (right) {
			right = false;
			if (m >= abs(x-y) && x < y) {
				totald += abs(originalpos - y);
				break;
			}
			else {
				currentpos = (x + m);
				totald += abs(currentpos - originalpos);
			}
		}
		else {
			right = true;
			if (m >= abs(x-y) && x > y) {
				totald += abs(originalpos - y);
				break;
			}
			else {
				currentpos = (x - m);
				totald += abs(currentpos - originalpos);
			}
		}
		m*=2;
		originalpos = currentpos;
	}
	
	cout << totald;
}