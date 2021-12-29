#include <bits/stdc++.h>
using namespace std;

#define ll long long



int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	int n, m, d, s;
	cin >> n >> m >> d >> s;

	int record[d][3];
	int sick[s][2];

	for (int i = 0; i < d; i++) {
		int p, m, t;
		cin >> p >> m >> t;

		record[i][0] = p;
		record[i][1] = m;
		record[i][2] = t;
		

	}
	for (int i = 0; i < s; i++) {
		int p, t;
		cin >> p >> t;

		sick[i][0] = p;
		sick[i][1] = t;
		
	}

	bool fields[m];
	for (int i = 0; i < m; i++) {
		int counter = 0;
		for (int j = 0; j < s; j++) {
			for (int k = 0; k < d; k++) {
				if(record[k][1] == i+1) {
					if (record[k][0] == sick[j][0]) {
						if (record[k][2] < sick[j][1]) {
							counter++;
							break;
						}	
					}
					
				} 
			}
		}
		if (counter == s) {
			fields[i] = true;
		}
		else {
			fields[i] = false;
		}
		
	}
	
	int maxcount = 0;
	for (int i = 0; i < m; i++) {
		if (fields[i] == true) {
			bool cows[n];
			for (int i = 0; i < n; i++) {
				cows[i] = false;
			}
			for (int j = 0; j < n; j++) {
				for (int k = 0; k < d; k++) {
					if (record[k][0] == j+1) {
						if (record[k][1] == i+1) {
							cows[j] = true;
						}
					}
				}
			}
			int counter = 0;
			for (int i = 0; i < n; i++) {
				if (cows[i] == true) {
					counter++;
				}
			}
			if (counter > maxcount) {
				maxcount = counter;
			}
		}
	} 

	cout << maxcount;

}


