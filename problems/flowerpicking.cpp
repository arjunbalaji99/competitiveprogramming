#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	int t, n;
	cin >> t >> n;

	int flowers[n];

	for (int i = 0; i < n; i++) {
		cin >> flowers[i];
	}

	for (int i = 0; i < n; i++) {
		int lowest = abs(flowers[i]);
		int index = i;
		for (int j = i; j < n; j++) {
			if (abs(flowers[j]) < lowest) {
				lowest = abs(flowers[j]);
				index = j;
			}
		}
		int temp = flowers[i];
		flowers[i] = flowers[index];
		flowers[index] = temp;
	}
	int counter = 0;
	int time = abs(flowers[0]);
	for (int i = 1; i <= n; i++) {
		if(time > t) {
			cout << counter;
			break;
		}
		else {
			counter++;
		}
		time += abs((flowers[i-1]-flowers[i]));

	}


}	




