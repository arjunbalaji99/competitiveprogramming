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
	
	int a, b, v; cin >> a >> b >> v;

	int counter = 0;
	int pos = 0;
	while (true) {
		counter++;
		pos += a;
		if (pos >= v) {
			break;
		}
		pos -= b;
	}

	cout << counter;

}




