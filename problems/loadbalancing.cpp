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
	freopen("balancing.in", "r", stdin);
	freopen("balancing.out", "w", stdout);
	
	int n, b;
	cin >> n >> b;

	int xloc[n];
	int yloc[n];

	for (int i = 0; i < n; i++) {
	    cin >> xloc[i] >> yloc[i];
	}
	int maxworst = n;
	for (int x = 0; x < n; x++) {
	    for (int y = 0; y < n; y++) {
	        int xdiv = xloc[x] + 1;
	        int ydiv = yloc[y] + 1;

	        int br = 0, tr = 0, bl = 0, tl = 0;

	        for (int i = 0; i < n; i++) {
	            if (xloc[i] < xdiv && yloc[i] < ydiv) {
	                bl++;
	            }
	            if (xloc[i] > xdiv && yloc[i] < ydiv) {
	                br++;
	            }
	            if (xloc[i] < xdiv && yloc[i] > ydiv) {
	                tl++;
	            }
	            if (xloc[i] > xdiv && yloc[i] > ydiv) {
	                tr++;
	            }
	        }

	        int worst = 0;
	        if (bl > worst) {
	            worst = bl;
	        }
	        if (tl > worst) {
	            worst = tl;
	        }
	        if (br > worst) {
	            worst = br;
	        }
	        if (tr > worst) {
	            worst = tr;
	        }

	        maxworst = min(maxworst, worst);
	    }
	}
	cout << maxworst;

}




