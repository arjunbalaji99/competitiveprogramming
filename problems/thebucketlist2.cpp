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
	
	int n; cin >> n;

	int times[1000] = {0};
	for (int i = 0; i < n; i++) {
		int s, t, b; cin >> s >> t >> b;
		for (int j = s-1; j < t; j++) {
			times[j] += b;
		}
	}

	int max = 0;
	for (int i = 0; i < 1000; i++) {
		if (times[i] > max) {
			max = times[i];
		}
	}

	cout << max;

}




