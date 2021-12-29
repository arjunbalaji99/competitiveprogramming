#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	int n, b;
	cin >> n >> b;

	int acorns[n];

	for (int i = 0; i < n; i++) {
		cin >> acorns[i];
	}


	for (int i = 0; i < n; i++) {
		int highest = acorns[i];
		int index = i;
		for (int j = i; j < n; j++) {
			if (acorns[j] > highest) {
				highest = acorns[j];
				index = j;
			}
		}
		int temp = acorns[i];
		acorns[i] = acorns[index];
		acorns[index] = temp;
	}
	int total = 0;
	for (int i = 0; i < n; i++) {
		total+= acorns[i];
		if (total >= b) {
			cout << i+1;
			break;
		}
	}

}	




