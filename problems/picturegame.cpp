#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	
	int n;
	cin >> n;

	int abcs[26] = {0};

	
	for (int i = 0; i < n; i++) {
		string s1, s2;
		cin >> s1 >> s2;

		int abc1[26] = {0};
		int abc2[26] = {0};

		for (int j = 0; j < s1.length(); j++) {
			int x = int(s1[j]) - 97;
			abc1[x] += 1;
		}

		for (int j = 0; j < s2.length(); j++) {
			int x = int(s2[j]) - 97;
			abc2[x] += 1;
		}

		for (int j = 0; j < 26; j++) {
			abcs[j] += max(abc1[j], abc2[j]);
		}	
	}

	for (int i = 0; i < 26; i++) {
		cout << abcs[i] << endl;
	}
}


