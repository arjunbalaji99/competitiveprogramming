#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("pails.in", "r", stdin);
	freopen("pails.out", "w", stdout);

	int x, y, m;
	cin >> x >> y >> m;

	int ans = 0;
	for (int i = 0; i <= m/x; i++) {
	    for (int j = 0; j <= m/y; j++) {
	        if ((x*i + y*j) <= m) {
	            int num = (x*i + y*j);
	            if (num > ans) {
	                ans = num;
	            }
	        }
	    }
	}

	cout << ans;

}
