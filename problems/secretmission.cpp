#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	
	string s1, s2;
	cin >> s1 >> s2;

	int s1amt = 1;

	for (int i = 0; i < s1.length(); i++) {
		int x = int(s1[i]) - 64;

		s1amt *= x;
	}
	s1amt = s1amt%47;
	int s2amt = 1;

	for (int i = 0; i < s2.length(); i++) {
		int y = int(s2[i]) - 64;

		s2amt *= y;
	}

	s2amt = s2amt%47;
	
	if (s1amt == s2amt) {
		cout << "GO";
	}
	else {
		cout << "STAY";
	}
}


