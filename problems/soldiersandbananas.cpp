#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
	//freopen("billboard.in", "r", stdin);
	//freopen("billboard.out", "w", stdout);
	
	int k, n, w;
	cin >> k >> n >> w;

	int pay = 0;
	for (int i = 1; i <= w; i++) {
		pay += (i*k);
	} 

	if (pay > n) {
		cout << pay-n;
	}
	else {
		cout << 0;
	}

}