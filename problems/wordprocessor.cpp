#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
	freopen("word.in", "r", stdin);
	freopen("word.out", "w", stdout);
	
	int n, k;
	cin >> n >> k;
	int linelen = 0;
	int counter = 0;
	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;

		linelen += word.length();
		if (linelen <= k) {
			if (i != 0) {
				cout << " ";
			}
			cout << word;
		}
		else {
			linelen = word.length();
			cout << endl << word;
		}
	}
}