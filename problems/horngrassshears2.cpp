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

	int games[4][4] = {0};
	for (int i = 0; i < n; i++) {
		int p1, p2; cin >> p1 >> p2;
		games[p1][p2]++;		
	}

	//1 > 2 > 3 > 1
	int ans1 = 0;
	ans1+=(games[1][2]);
	ans1+=(games[2][3]);
	ans1+=(games[3][1]);

	//1 > 3 > 2 > 1
	int ans2 = 0;
	ans2+=(games[1][3]);
	ans2+=(games[3][2]);
	ans2+=(games[2][1]);

	cout << max(ans1, ans2);
}




