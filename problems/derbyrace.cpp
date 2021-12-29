#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("square.in", "r", stdin);
	//freopen("square.out", "w", stdout);
	
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < k; i++) {
		int total = 0;
		int current = 0;
		int ran = 0;
		bool boo = true;
		int s, t, r;
		cin >> s >> t >> r;
		while (boo) {
			current += 1;
			total += 1;
			ran += s;
			if (ran >= n) {
				cout << total << endl;
				boo = false;		
			}
			if (current >= t) {
				total += r;
				current = 0;
			}
		}
	}
}	