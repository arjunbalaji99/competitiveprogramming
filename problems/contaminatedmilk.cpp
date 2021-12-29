#include <bits/stdc++.h>
using namespace std;

/*
struct Cow {
	int day;
	string cow;
	int change;
};

bool comp (Cow c1, Cow c2){
    if (c1.day < c2.day)//it will sort the array by population in decreasing order
        return true;
    return false;
}
*/

int main() {
	freopen("badmilk.in", "r", stdin);
	freopen("badmilk.out", "w", stdout);
	
	int n, m, d, s;
	cin >> n >> m >> d >> s;

	int transcript[d][3];
	for (int i = 0; i < d; i++) {
	    cin >> transcript[i][0] >> transcript[i][1] >> transcript[i][2];
	}

	int sick[s][2];
	for (int i = 0; i < s; i++) {
	    cin >> sick[i][0] >> sick[i][1];
	}

	bool milks[m];
	for (int i = 0; i < m; i++) {
	    milks[i] = false;
	}

	for (int i = 0; i < m; i++) {
	    int counter = 0;
	    for (int j = 0; j < s; j++) {
	        for (int k = 0; k < d; k++) {
	            if (i+1 == transcript[k][1]) {
	                if (sick[j][0] == transcript[k][0]) {
	                    if (sick[j][1] > transcript[k][2]) {
	                        counter++;
	                        break;
	                    }
	                }
	            }
	        }
	    }
	    if (counter == s) {
	        milks[i] = true;
	    }
	}


	int ans = 0;
	for (int i = 0; i < m; i++) {
		if (milks[i] == true) {
			bool cows[n];
			for (int i = 0; i < n; i++) {
				cows[i] = false;
			}
			for (int j = 0; j < n; j++) {
				for (int k = 0; k < d; k++) {
					if (transcript[k][0] == j+1) {
						if (transcript[k][1] == i+1) {
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
			if (counter > ans) {
				ans = counter;
			}
		}
	} 

	cout << ans;
}




