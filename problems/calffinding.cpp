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
	
	int x, y; cin >> x >> y;

	int distance = 0;
	int pos = x;
	int counter = 1;
	bool right = true;
	bool less = false;
	bool greater = false;
	if (x < y) {
		less = true;
	}
	else {
		greater = true;
	}
	while (true) {
		if (right == true) {
			right = false;
			if (less == true) {
				if (x + counter >= y) {
					distance += y - pos;
					break;
				}
				else {
					distance += (x+counter) - pos;
					pos = x + counter;
				}
			}
			else {
				distance += (x+counter) - pos;
				pos = x + counter;
			}
		}
		else {
			right = true;
			if (greater == true) {
				if (x - counter <= y) {
					distance += pos - y;
					break;
				}
				else {
					distance += pos - (x-counter);
					pos = x - counter;
				}
			}
			else {
				distance += pos - (x-counter);
				pos =  x - counter;
			}
		}
		counter*=2;
	}

	cout << distance;
	
}






