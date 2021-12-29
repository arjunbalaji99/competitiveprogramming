/*
ID: arjunba2
PROG: milk2
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

/*
struct Cow{ 
	int piece[n][n]
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

	int n, l; cin >> n >> l;

	int citations[n];
	for (int i = 0; i < n; i++) {
		cin >> citations[i];
	}

	sort(citations, citations+n);

	int minimum = 100001;
	int h = 0;
	int counter = 0;
	for (int i = n-1; i >= 0; i--) {
		minimum = min(minimum, citations[i]);
		counter++;

		if (minimum >= counter) {
			h = counter;
		}
	}

	int start = n - 1;
	counter = 0;
	for (int i = n - 1; i >= 0; i--) {
		counter++;
		if (h < counter) {
			start = i;
			break;
		}
	}

	if (start < l) {
		for (int i = l - 1; i >= 0; i--) {
			citations[i]++;
		}
	}
	else {
		for (int i = start; i > start - l; i--) {
			citations[i]++;
		}
	}

	sort(citations, citations+n);

	minimum = 100001;
	counter = 0;
	for (int i = n-1; i >= 0; i--) {
		minimum = min(minimum, citations[i]);
		counter++;

		if (minimum >= counter) {
			h = counter;
		}
	}

	
	cout << h;


}








