#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	int n;
	cin >> n;
	int h1 = 0, h2 = 0, g1 = 0, g2 = 0, s1 = 0, s2 = 0;
	for (int i = 0; i < n; i++) {
		int p1, p2;
		cin >> p1 >> p2;
		if (p1 == 1) {
			if (p2 == 2) {
				h2+=1;
				g1+=1;
				s1+=1;
			}
			if (p2 == 3) {
				h1+=1;
				g2+=1;
				s2+=1;
			}
		}
		if (p1 == 2) {
			if (p2 == 1) {
				h1+=1;
				g2+=1;
				s2+=1;
			}
			if (p2 == 3) {
				h2+=1;
				g1+=1;
				s1+=1;
			}
		}
		if (p1 == 3) {
			if (p2 == 1) {
				h2+=1;
				g1+=1;
				s1+=1;
			}
			if (p2 == 2) {
				h1+=1;
				g2+=1;
				s2+=1;
			}
		}	

	}
	int highest = 0;
	int l[6];
	l[0] = h1;
	l[1] = h2;
	l[2] = g1;
	l[3] = g2;
	l[4] = s1;
	l[5] = s2;
	for (int i = 0; i < 6; i++) {
		if (l[i] > highest) {
			highest = l[i];
		}
	}
	cout << highest;

}	
