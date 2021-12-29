#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	int n, m;
	cin >> n >> m;

	char clues[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> clues[i][j];
		}
	}
	int counter = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (clues[i][j] == '.') {
				if (clues[i][j] == '.' && (j == 0 || clues[i][j-1] == '#') && j < m-2 && clues[i][j+1] == '.' && clues[i][j+2] == '.') {
					counter++;
					clues[i][j] = 'C';
				}
				if (clues[i][j] == '.' && (i == 0 || clues[i-1][j] == '#') && i < n-2 && clues[i+1][j] == '.' && clues[i+2][j] == '.') {
					counter++;
					clues[i][j] = 'C';
				}
			}
		}
	}

	cout << counter << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (clues[i][j] == 'C') {
				cout << i+1 << " " << j+1 << endl;
			}
		}
	}
}	




