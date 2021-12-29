#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("blocks.in", "r", stdin);
	freopen("blocks.out", "w", stdout);
	
	int n;
	cin >> n;

	
	
	int abcs[26] = {0};

	for (int j = 0; j < n; j++) {
		string s1, s2;
		cin >> s1 >> s2;
		int abcs1[26] = {0};

		for (int i = 0; i < s1.length(); i++) {
			int x = s1[i];
			x -= 97;
			abcs1[x] += 1;
		}

		int abcs2[26] = {0};

		for (int i = 0; i < s2.length(); i++) {
			int x = s2[i];
			x -= 97;
			abcs2[x] += 1;
		}

		for (int i = 0; i < 26; i++) {
			abcs[i] += max(abcs1[i], abcs2[i]);
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << abcs[i] << endl;
	}

}
