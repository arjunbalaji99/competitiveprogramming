#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);
	
	int cows[3][2];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> cows[i][j];
		}
	}

	for (int i = 0; i < 100; i++) {
		int milkspace = cows[(i+1)%3][0] - cows[(i+1)%3][1];
		if (milkspace >= cows[i%3][1]) {
			cows[(i+1)%3][1] += cows[i%3][1];
			cows[i%3][1] = 0;		
		}
		else {
			cows[(i+1)%3][1] += milkspace;
			cows[i%3][1] -= milkspace;			
		}	
	}

	for (int i = 0; i < 3; i++) {
		cout << cows[i][1] << endl;
	}
	
}