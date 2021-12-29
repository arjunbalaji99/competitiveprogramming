/*
ID: arjunba2
PROG: ride
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
	freopen("ride.in", "r", stdin);
	freopen("ride.out", "w", stdout);

	string a, b; cin >> a >> b;

	int atotal = 1;
	for (int i = 0; i < a.length(); i++) {
		char c = a[i];
		int x = c - 64;
		atotal *= x;
	}

	int btotal = 1;
	for (int i = 0; i < b.length(); i++) {
		char c = b[i];
		int x = c - 64;
		btotal *= x;
	}

	if (atotal % 47 == btotal % 47) {
		cout << "GO" << endl;
	}
	else {
		cout << "STAY" << endl;
	}

}






