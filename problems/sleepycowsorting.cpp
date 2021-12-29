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
	freopen("sleepy.in", "r", stdin);
	freopen("sleepy.out", "w", stdout);

	int n; cin >> n;

	int cows[n];
	for (int i = 0; i < n; i++) {
		cin >> cows[i];
	}

	int answer = n - 1;
	for (int i = n - 2; i >= 0; i--) {
		if (cows[i] < cows[i+1]) {
			answer = i;
		}
		else {
			break;
		}
	}
	cout << answer << endl;	
}




