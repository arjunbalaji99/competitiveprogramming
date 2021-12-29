/*
ID: arjunba2
PROG: beads
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
	freopen("beads.in", "r", stdin);
	freopen("beads.out", "w", stdout);
	
	int n; cin >> n;
	string s; cin >> s;

	int maxTotal = 0;
	for (int i = 0; i < s.length(); i++) {
		int total = 0;

		int left = 0;
		int index = i;
		char c = s[index];
		while (true) {
			if (c == 'w' && s[index - 1] != 'w') {
				c = s[index - 1];
			}
			if (left == s.length()) {
				break;
			}
			if (index == -1) {
				index = s.length() - 1;
			}
			if (s[index] == c || s[index] == 'w') {
				left++;
			}
			else {
				break;
			}
			index--;
		}
		int right = 0;
		index = i + 1;
		c = s[index];
		while (true) {
			if (c == 'w' && s[index + 1] != 'w') {
				c = s[index - 1];
			}
			if (right == s.length()) {
				break;
			}
			if (index == s.length()) {
				index = 0;
			}
			if (s[index] == c || s[index] == 'w') {
				right++;
			}
			else {
				break;
			}
			index++;
		}
		total = left + right;
		if (total > s.length()) total = s.length();
		if (maxTotal < total) {
			maxTotal = total;
		}
	}

	cout << maxTotal << endl;
}






