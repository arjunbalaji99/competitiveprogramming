#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);

	int n, l;
	cin >> n >> l;

	int list[l];
	for (int i = 0; i < l; i++) {
		cin >> list[i];
	}

	bool cows[n];
	for (int i = 0; i < n; i++) {
		cows[i] = true;
	}
	int lcounter = -1;
	int index = 0;
	for (int i = 0; i < n-1; i++) {
		lcounter++;
		int len = sizeof(list)/sizeof(list[0]);
		if (lcounter == len) {
			lcounter = 0;
		}
		int counter = 0;
		while(true) {
			if(index == n) {
				index = 0;
			}			
			if(cows[index] == true) {
				counter++;
				if(counter == list[lcounter]) {
					cows[index] = false;
					break;
				}
				
			}
			index++;
			
		}
	}

	for (int i = 0; i < n; i++) {
		if(cows[i] == true) {
			cout << i+1;
		}
	}


}


