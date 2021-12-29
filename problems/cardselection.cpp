#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("square.in", "r", stdin);
	//freopen("square.out", "w", stdout);
	
	int n, t;
	cin >> n >> t;
	int cards[n];
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		cards[i] = temp;
	}
	for (int i = 0; i < t; i++) {
		int highest = cards[0];
		int index = 0;
		int evensplit;
		for (int j = 0; j < n; j++) {
			if (cards[j] > highest) {
				highest = cards[j];
				index = j;
			}
		}
		cout << (index+1) << endl;
		cards[index] = 0;
		evensplit = (highest/(n-1));

		int remainder = (highest - (evensplit*(n-1)));
		if (evensplit == 0) {
			for (int i = 0; i < highest; i++) {
				if (i != index) {
					cards[i] += 1;	
				}
				else {
					highest++;
				} 
			}
		}
		else {
			for (int i = 0; i < n; i++) {
				if (i != index) {
					cards[i] += evensplit;	
				} 
			}
			for (int i = 0; i < remainder; i++) {
				if (i != index) {
					cards[i] += 1;	
				} 
				else {
					remainder++;
				} 
			}
		}
		
		
	}
	


}	
