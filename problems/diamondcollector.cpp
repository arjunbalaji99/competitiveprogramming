#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);

	int n, k;
	cin >> n >> k;

	int diamonds[n];

	for (int i = 0; i < n; i++) {
		cin >> diamonds[i];
	}

	sort(diamonds, diamonds+n);

	int ans = 0;
	for (int i = 0; i < n; i++) {
	    int pos = 0;
	    for (int j = i; j < n; j++) {
	        if ((diamonds[j] - diamonds[i]) <= k) {
	            pos++;
	        }
	    }
	    if (pos > ans) {
	        ans = pos;
	    }
	}

	cout << ans;


}
