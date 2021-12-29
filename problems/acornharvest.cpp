/*
ID: arjunba2
PROG: milk2
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

/*
struct Cow{ 
	int size, pos;
};

bool comp (Cow c1, Cow c2){
    if (c1.pos < c2.pos)//> = decreasing,  < = increasing
        return true;
    return false;
}
*/

int main() {
	//freopen("milk2.in", "r", stdin);
	//freopen("milk2.out", "w", stdout);

	int n; cin >> n;

	int xs[n];
	int ys[n];
	int radii[n];
	for (int i = 0; i < n; i++) {
		cin >> xs[i] >> ys[i] >> radii[i];
	}

	int counter[n];
	for (int i = 0; i < n; i++) {
		counter[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((xs[j]-xs[i]) * (xs[j]-xs[i]) + (ys[j]-ys[i]) * (ys[j]-ys[i]) == (radii[i] + radii[j]) * (radii[i] + radii[j])) {
				counter[i]++;
			}
		}
	}

	int index;
	for (int i = 0; i < n; i++) {
		if (counter[i] == 1) {
			if (xs[i] != 0 && ys[i] != 0) {
				index = i;
			}
		}
	}

	cout << xs[index] << " " << ys[index];

}








