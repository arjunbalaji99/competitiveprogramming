#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	
	int n; 
	cin >> n;

	int positions[n];
	for (int i = 0; i < n; i++) {
		cin >> positions[i];
	}

	int acorns[n];
	for (int i = 0; i < n; i++) {
		cin >> acorns[i];
	}

	for (int i = 0; i < 3; i++) {
		int temp[n];
		for (int i = 0; i < n; i++) {
			int position = positions[i] - 1;
			temp[i] = acorns[position]; 
		}


		for (int i = 0; i < n; i++) {
			acorns[i] = temp[i];
		}

	}

	for (int i = 0; i < n; i++) {
		cout << acorns[i] << endl;
	}
}


