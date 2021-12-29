/*
ID: arjunba2
PROG: milk2
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;


struct Cow{ 
	int source;
	int des;
	int dir;
};

bool comp (Cow c1, Cow c2){
    if (c1.source < c2.source)//> = decreasing,  < = increasing
        return true;
    return false;
}



int main() {
	//freopen("milk2.in", "r", stdin);
	//freopen("milk2.out", "w", stdout);
	
	int n; cin >> n;

	Cow pulleys[n];
	for (int i = 0; i < n; i++) {
		cin >> pulleys[i].source >> pulleys[i].des >> pulleys[i].dir;
	}

	sort(pulleys, pulleys+n, comp);

	int direction = 0;
	for (int i = 0; i < n; i++) {
		if (pulleys[i].dir == 1) {
			direction = !direction;
		}
	}	

	cout << direction;
}




