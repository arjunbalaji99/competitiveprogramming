/*
ID: arjunba2
PROG: milk2
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;


struct Cow{ 
	int size, pos;
};

bool comp (Cow c1, Cow c2){
    if (c1.pos < c2.pos)//> = decreasing,  < = increasing
        return true;
    return false;
}



int main() {
	//freopen("milk2.in", "r", stdin);
	//freopen("milk2.out", "w", stdout);

	int n; cin >> n;

	Cow fences[n];
	for (int i = 0; i < n; i++) {
		cin >> fences[i].size >> fences[i].pos;
	}

	sort(fences, fences+n, comp);

	int area = 0;
	for (int i = 0; i < n-1; i++) {
		int left = i, right = i + 1;
		int a = fences[right].pos - fences[left].pos;
		while (true) {
			int dif = fences[right].pos - fences[left].pos;
			bool exit = false;
			if (right < n && fences[right].size < dif) {
				right++; 
				exit = true;
			}
			if (left > -1 && fences[left].size < dif)  {
				left--; 
				exit = true;
			}
			if (left == -1 || right == n) {
				break;
			}
			if (exit == false) {
                area += a;
				break;
			}
		}
	}

	cout << area;
}








