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
	//freopen("outofplace.in", "r", stdin);
	//freopen("outofplace.out", "w", stdout);

	int n; cin >> n;
	int o = 0, e = 0;

	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		if (num % 2 == 0) e++;
		if (num % 2 == 1) o++;
	}

	if (o == e || e-1 == o) {
		cout << e + o;
	}
	else if (e > o) {
		cout <<  2*o + 1;
	}
	else if (o - 1 == e) {
		cout << o + e - 2;
	}
	else if (o - 2 == e) {
		cout << o + e - 1;
	}
	else {
		while (o - 2 > e) {
			o-=2;
			e++;
		}
		if (o == e || e-1 == o) {
		cout << e + o;
		}
		else if (e > o) {
			cout <<  2*o + 1;
		}
		else if (o - 1 == e) {
			cout << o + e - 2;
		}
		else if (o - 2 == e) {
			cout << o + e - 1;
		}
	}

	
}






