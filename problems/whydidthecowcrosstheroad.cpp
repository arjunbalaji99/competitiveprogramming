#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("circlecross.in", "r", stdin);
	freopen("circlecross.out", "w", stdout);
	
	string cows;
	cin >> cows;
	int result = 0;
	int startend[26][2];

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < 2; j++) {
			startend[i][j] = -1;
		}
	}
	for (int i = 0; i < 52; i++) {
		for (int j = 0; j < 2; j++) {
			int x = int(cows[i]) - 65;
			if (startend[x][0] == -1) {
				startend[x][0] = i;
			}
			else {
				startend[x][1] = i;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		int start = startend[i][0];
		int end = startend[i][1];
		string s = cows.substr(start+1, end-start-1);
		int counter[26];
		for (int i = 0; i < 26; i++) {
			counter[i] = 0;
		}
		for (int j = 0; j < s.length(); j++) {
			int x = s[j] - 65;
			counter[x] += 1;
		}

		for (int j = 0; j < 26; j++) {
			if(counter[j] == 1) {
				result+=1;
			}
		}
	}

	cout << (result/2);

}


