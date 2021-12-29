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
	
	int n, m; cin >> n >> m;

	int sum = 0;
	int counter = 0;
	while (n > 0) {
		sum += pow(m, counter) * (n % 10);
		n/=10;
		counter++;
	}

	cout << sum;
}




