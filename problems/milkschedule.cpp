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

	int b[n];
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < q; i++) {
		int qu; cin >> qu;
		int time = 0;
		for (int i = 0; i < n; i++) {
			time += b[i];
			if (time > qu) {
				cout << i + 1 << endl;
				break;
			}
		}
	}

}




