#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("gymnastics.in", "r", stdin);
	freopen("gymnastics.out", "w", stdout);

		int k, n;
	cin >> k >> n;

	int train[k][n];

	for (int i = 0; i < k; i++) {
	    for (int j = 0; j < n; j++) {
	        cin >> train[i][j];
	    }
	}

	int counter = 0;

	for (int i = 1; i <= n; i++) {
	    for (int j = 1; j <= n; j++) {
	        bool greater = false;
	        bool less = false;
	        for (int m = 0; m < k; m++) {
	            int a;
	            int b;
	            for (int x = 0; x < n; x++) {
	                if (train[m][x] == i) {
	                    a = x;
	                }
	                if (train[m][x] == j) {
	                    b = x;
	                }

	            }
	            if (a > b) {
	                greater = true;
	            }
	            if (b > a) {
	                less = true;
	            }
	        }
	        if ((greater == true && less == false) || (less == true && greater == false)) {
	            counter++;
	        }
	    }
	}

	cout << counter/2;

		
}
