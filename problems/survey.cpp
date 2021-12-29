#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	int n, nq, p;
	cin >> n >> nq >> p;

	int answers[n][nq];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < nq; j++) {
			cin >> answers[i][j];
		}
	}
	bool cows[n];
	for (int i = 0; i < n; i++) {
		cows[i] = true;
	}

	for (int i = 0; i < p; i++) {
		int question, answer;
		cin >> question >> answer;
		for (int j = 0; j < n; j++) {
			if (answers[j][question-1] != answer) {
				cows[j] = false;
			}
		}
	}

	int counter = 0;
	for (int i = 0; i < n; i++) {
		if (cows[i] == true) {
			counter++;
		}
	}

	cout << counter;

}	




