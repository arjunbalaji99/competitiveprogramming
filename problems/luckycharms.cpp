#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("square.in", "r", stdin);
	//freopen("square.out", "w", stdout);
	
	int l, c, n;
	cin >> l >> c >> n;
	int answer = 0;
	for (int i = 0; i < c; i++) {
		int s, p;
		cin >> s >> p;
		answer = abs(n-p) + s;
		cout << answer << endl;
	}

	
}	