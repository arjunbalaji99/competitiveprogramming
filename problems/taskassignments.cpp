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
	
	int f, k; cin >> f >> k;

	int tasks[k][2];
	for (int i = 0; i < k; i++) {
		cin >> tasks[i][0] >> tasks[i][1];
	}

	bool cows[f];
	for (int i = 0; i < f; i++) {
		cows[i] = false;
	}

	for (int i = 0; i < k; i++) {
		int start = tasks[i][0];
		for (int j = start - 1; j < f; j+=tasks[i][1]) {
			cows[j] = true;
		}
	}
	int counter = 0;
	for (int i = 0; i < f; i++) {
		if (cows[i] == false) {
			counter++;
		}
	}

	cout << counter;
}	




