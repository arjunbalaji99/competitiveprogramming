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
	
	int n, s; cin >> n >> s; 

	int foxes[n];
	for (int i = 0; i < n; i++) {
		cin >> foxes[i];
	}

	sort(foxes, foxes+n);
	int counter = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j) {
				if (foxes[i] + foxes[j] <= s) {
					counter++;
				}
				else {
					break;
				}
			}
		}
	}

	cout << counter/2;
}




