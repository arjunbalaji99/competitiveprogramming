#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	int n;
	cin >> n;
	int r[n];
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		r[i] = temp;
	}
	int lowest = 1000000000;
	for (int i = 0; i < n; i++) {
		int distance = 0;
		int counter = 1;
		int index = i+1;
		while(true) {
			if (index >= n) {
				index = 0;
			}
			if (counter >= n) {
				break;
			} 
			distance += (r[index] * counter);
			counter++;
			index++;
		}

		if (distance < lowest) {
			lowest = distance;
		}
	}
	cout << lowest;



}	
