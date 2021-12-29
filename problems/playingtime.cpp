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

	int rounds[n];
	for (int i = 0; i < n; i++) {
		cin >> rounds[i];
	}

	rounds[0] = 0;
	int counter = -1;
	for (int i = n-1; i >= 0; i--) {
		if (rounds[i] > 0 && counter < 0) {
			counter = rounds[i];
		}
		else if (rounds[i] == -1 && counter >= 0) {
			rounds[i] = counter;
		} 
		else if (rounds[i] != -1 && counter >= 0) {
			if (rounds[i] != counter) {
				cout << -1;
				return 0;
			}
		}
		counter--;
	}

	int zeroes = 0, negones = 0;
	for (int i = 0; i < n; i++) {
		if (rounds[i] == 0) {
			zeroes++;
		}
		if (rounds[i] == -1) {
			negones++;
		}
	}

	cout << zeroes << " " << zeroes + negones;
}




