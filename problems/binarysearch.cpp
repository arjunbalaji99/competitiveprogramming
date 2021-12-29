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
	
	int n, q; cin >> n >> q;

	int list[n];
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}

	for (int i = 0; i < q; i++) {
		int num; cin >> num;
		int low = 0, high = n-1;
		bool found = false;
		while (low <= high) {
			int mid = (low + high)/2;
			if (list[mid] == num && list[mid - 1] != num) {
				found = true;
				cout << mid << endl;
				break;
			}
			else if (num <= list[mid]) {
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}
		if (found == false) {
			cout << -1 << endl;
		}

	}
}




