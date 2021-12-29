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

	int medians[n];

	for (int i = 0; i < n; i++) {
		int row[n];
		for (int j = 0; j < n; j++) {
			cin >> row[j];
		}
		sort(row, row + n);
		medians[i] = row[n/2];
	}

	sort(medians, medians+n);
	cout << medians[n/2];

}




