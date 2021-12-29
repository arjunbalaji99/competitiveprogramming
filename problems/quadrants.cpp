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
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            int fencex = xs[i] + 1;
            int fencey = xs[j] + 1;

            int bl = 0, br = 0, tl = 0, tr = 0;
            for (int k = 0; k < n; k++) {
                if (xs[k] < fencex && ys[k] < fencey) {
                    bl++;
                }
                else if (xs[k] < fencex && ys[k] > fencey) {
                    tl++;
                }
                else if (xs[k] > fencex && ys[k] < fencey) {
                    br++;
                }
                else if (xs[k] > fencex && ys[k] > fencey) {
                    tr++;
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
            if (minWorst == worst) cout << fencex << " " << fencey << endl;
        }
    }
    cout << minWorst;

	
}






