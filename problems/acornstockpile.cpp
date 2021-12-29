#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	int n, x;
	cin >> n >> x;
	int acorns[n];
	for (int i = 0; i < n; i++) {
		cin >> acorns[i];
	}
	int highest = 0;
	for (int i = 0; i < n; i++) {
		int temp = acorns[i];
		int counter = 0;
		for (int j = 0; j < n; j++) {
			if (acorns[j] - temp >=0 && acorns[j] - temp <= x) {
				counter++;
			}
		}
		if (counter > highest) {
			highest = counter;
		}
	}
	cout << highest;	

}	
