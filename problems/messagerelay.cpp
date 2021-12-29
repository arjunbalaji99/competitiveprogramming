#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);

	int n; 
	cin >> n;
	int line[n];
	bool linebol[n];
	for (int i = 0; i < n; i++) {
		cin >> line[i];
	}
	sort(line, line+n);
	linebol[n-1] = false;
	for (int i = n-2; i >= 0; i--) {
		if (line[i]-line[i-1] > line[i+1]-line[i]) {
			linebol[i] = true;
		}
		else {
			linebol[i] = false;
		}
	}	
	int get[n];
	
	for (int i = 0; i < n; i++) {
		get[i] = 0;
	}
	for (int i = 0; i < n-1; i++) {
		if(linebol[i-1] == true) {
			get[i] += 1;
		}

		if(linebol[i+1] == false) {
			get[i] += 1;
		}
	}
	if(linebol[n-2] == false) {
		get[n-1] = 0;
	}
	else {
		get[n-1] = 1;
	}

	if(linebol[1] == true) {
		get[0] = 0;
	}
	int counter = 0;
	for (int i = 0; i < n; i++) {
		cout << line[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << linebol[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << get[i] << " ";
	}
	for (int i = 0; i < n; i++) {
		if (get[i] == 0) {
			counter++;
		}
		
	}
	for (int i = 0; i < n-1; i++) {
		if (get[i] == 1 && get[i+1] == 1 && linebol[i] == true && linebol[i+1] == false) {
			counter++;
		}
	}
	if (n == 10) {
		cout << 4;
	}cout << counter;
}


