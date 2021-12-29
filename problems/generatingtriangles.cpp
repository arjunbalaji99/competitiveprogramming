#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	
	int n, s;
	cin >> n >> s;

	int triangle[n][n];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			triangle[i][j] = 0;
		}
	}
	int counter = s;
	int counter2 = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j < counter2) {
				triangle[j][i] = counter;
				counter++;
				if (counter > 9) {
					counter = 1;
				}
			}

		}
		counter2++;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (triangle[i][j] == 0) {
				cout << "  ";
			}
			else {
				cout << triangle[i][j] << " ";
			}
		}
		cout << endl;
	}

}


