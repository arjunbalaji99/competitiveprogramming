#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("square.in", "r", stdin);
	//freopen("square.out", "w", stdout);
	
	int a, b, c;
	cin >> a >> b >> c;

	for (int i = 0; i < a; i++) {
		string s2 = "";
		for (int i = 0; i < b; i++) {
			char w;
			cin >> w;
			for (int i = 0; i < c; i++) {
				s2 += w;
			}
		}
		for (int i = 0; i < c; i++) {
			cout << s2 << endl;
		}

	}
}	