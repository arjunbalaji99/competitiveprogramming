#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	
	int nr, nc;
	cin >> nr >> nc; 

	int grid[nr][nc];
	for (int i = 0; i < nr; i++) {
		for (int j = 0; j < nc; j++) {
			cin >> grid[i][j];
		}
	}
	int highest = 0;
	int index1 = 0;
	int index2 = 0;
	for (int i = 0; i < nr - 2; i++) {
		for (int j = 0; j < nc - 2; j++) {
			int sum = 0;
			for (int k = 0; k < 3; k++) {
				for (int h = 0; h < 3; h++) {
					sum += grid[i+k][j+h];
				}
			}
			if (highest < sum) {
				highest = sum;
				index1 = i + 1;
				index2 = j + 1;
			}
		}
	}

	cout << highest << endl;
	cout << index1 << " " << index2;
}


