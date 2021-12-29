/*
ID: arjunba2
PROG: milk2
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

/*
struct Cow{ 
	int source;
	int des;
	int dir;
};

bool comp (Cow c1, Cow c2){
    if (c1.source < c2.source)//> = decreasing,  < = increasing
        return true;
    return false;
}
*/


int main() {
	//freopen("milk2.in", "r", stdin);
	//freopen("milk2.out", "w", stdout);
	
	int a, b; cin >> a >> b;

	string a1 = to_string(a);
	string b1 = to_string(b);

	string maxa = "";
	string mina = "";
	for (int i = 0; i < a1.length(); i++) {
		if (a1[i] == '5') {
			maxa += '6';
			mina += '5';
		}
		else if (a1[i] == '6') {
			mina += '5';
			maxa += '6';
		}
		else {
			maxa += a1[i];
			mina += a1[i];
		}
	}

	string maxb = "";
	string minb = "";
	for (int i = 0; i < b1.length(); i++) {
		if (b1[i] == '5') {
			maxb += '6';
			minb += '5';
		}
		else if (b1[i] == '6') {
			minb += '5';
			maxb += '6';			
		}
		else {
			maxb += b1[i];
			minb += b1[i];
		}
	}
	
	int maxa1 = stoi(maxa);
	int mina1 = stoi(mina);
	int maxb1 = stoi(maxb);
	int minb1 = stoi(minb);

	cout << mina1 + minb1 << " " << maxa1 + maxb1;
	
}




