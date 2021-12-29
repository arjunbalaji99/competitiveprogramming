#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("cownomics.in", "r", stdin);
	freopen("cownomics.out", "w", stdout);

	int n, m;
	cin >> n >> m;

	char spgenes[m][n];

	for (int j = 0; j < n; j++) {
	    for (int i = 0; i < m; i++) {
	        cin >> spgenes[i][j];
	    }
	}

	char plgenes[m][n];

	for (int j = 0; j < n; j++) {
	    for (int i = 0; i < m; i++) {
	        cin >> plgenes[i][j];
	    }
	}

	int counter = 0;
	string genes = "ATCG";
	for (int i = 0; i < m; i++) {
	    int sp[4] = {0};
	    for (int j = 0; j < n; j++) {
	        int x = genes.find(spgenes[i][j]);
	        sp[x] += 1;
	    }

	    int pl[4] = {0};
	    for (int j = 0; j < n; j++) {
	        int x = genes.find(plgenes[i][j]);
	        pl[x] += 1;
	    }

	    bool pos = true;

	    for (int j = 0; j < 4; j++) {
	        if (sp[j] > 0 && pl[j] > 0) {
	            pos = false;
	        }
	    }

	    if (pos == true) {
	        counter++;
	    }
	}

	cout << counter;

		
}
