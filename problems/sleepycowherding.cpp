#include <bits/stdc++.h>
using namespace std;

/*
struct Cow {
	int start;
	int time;
};

bool comp (Cow c1, Cow c2){
    if (c1.start < c2.start)//> = decreasing,  < = increasing
        return true;
    return false;
}
*/

int main() {
	freopen("herding.in", "r", stdin);
	freopen("herding.out", "w", stdout);

	int cows[3];
	for (int i = 0; i < 3; i++) {
		cin >> cows[i];
	}
	sort (cows, cows + 3);

	if (cows[2] == cows[0] + 2) {
		cout << 0 << endl;
	}
	else if (cows[1] == cows[2] - 2 || cows[1] == cows[0] + 2) {
		cout << 1 << endl;
	}
	else {
		cout << 2 << endl;
	}

	cout << max(cows[1] - cows[0]-1, cows[2] - cows[1]-1);
}




