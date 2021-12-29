#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	int r, c;
	cin >> r >> c;
	char puddles[r][c];
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> puddles[i][j];
		}
	}
	int counter = 0;
	int test = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (puddles[i][j] == '#') {
				test++;
				if (puddles[i+1][j] != '#' && puddles[i][j+1] != '#') {
					counter++;
					
				}
				else if (j == c-1 || i == r-1) {
					if (j == c-1) {
						if (puddles[i+1][j] != '#') {
							counter++;
							
						}
					}
					if (i == r-1) {
						if (puddles[i][j+1] != '#') {
							counter++;
							
						}
					}
				}
			}
		}
	}

	cout << counter;



}	
