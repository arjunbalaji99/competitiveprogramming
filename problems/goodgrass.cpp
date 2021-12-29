/*
ID: arjunba2
PROG: milk2
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

/*
struct Cow{ 
	string name;
	int milk;
};

bool comp (Cow c1, Cow c2){
    if (c1.milk < c2.milk)//> = decreasing,  < = increasing
        return true;
    return false;
}
*/



int main() {
	//freopen("milk2.in", "r", stdin);
	//freopen("milk2.out", "w", stdout);
	
	int n, b; cin >> n >> b;

    int xs[n];
    int ys[n];
    for (int i = 0; i < n; i++) {
        cin >> xs[i] >> ys[i];
    }	
    int minWorst = 100;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int fencex = xs[i];
            int fencey = xs[j];

            int bl = 0, br = 0, tl = 0, tr = 0;
            for (int k = 0; k < n; k++) {
                for (int l = 0; l < n; l++) {
                    if (xs[k] < fencex && ys[l] < fencey) {
                        bl++;
                    }
                    else if (xs[k] < fencex && ys[l] > fencey) {
                        tl++;
                    }
                    else if (xs[k] > fencex && ys[l] < fencey) {
                        br++;
                    }
                    else {
                        tr++;
                    }
                }
            }
            int worst = 0;
            if (bl > worst) {
                worst = bl;
            }
            if (br > worst) {
                worst = br;
            }
            if (tl > worst) {
                worst = tl;
            }
            if (tr > worst) {
                worst = tr;
            }

            minWorst = min(minWorst, worst);
        }
    }
    cout << minWorst;
}






