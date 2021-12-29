#include <bits/stdc++.h>
using namespace std;

struct Cow {
	int day;
	string cow;
	int change;
};

bool comp (Cow c1, Cow c2){
    if (c1.day < c2.day)//it will sort the array by population in decreasing order
        return true;
    return false;
}

int main() {
	freopen("measurement.in", "r", stdin);
	freopen("measurement.out", "w", stdout);

	int n;
	cin >> n;

	Cow cows[n];
	for (int i = 0; i < n; i++) {
		cin >> cows[i].day;
		cin >> cows[i].cow;
		cin >> cows[i].change;		
	}

	sort(cows, cows + n, comp);
	int counter = 0;
	string leaders = "BEM";
	int b = 7;
	int e = 7;
	int m = 7;
	for (int i = 0; i < n; i++) {
		string leadersnew = "";
		if (cows[i].cow == "Bessie") {
			b+=cows[i].change;
		}
		else if (cows[i].cow == "Elsie") {
			e+=cows[i].change;
		}
		else if (cows[i].cow == "Mildred") {
			m+=cows[i].change;
		}
		if (b == max(max(b,e), m)) {
			leadersnew+="B";
		}
		if (e == max(max(b,e), m)) {
			leadersnew+="E";
		}
		if (m == max(max(b,e), m)) {
			leadersnew+="M";
		}

		if (leaders != leadersnew) {
			counter++;
		}

		leaders = leadersnew;
	}

	cout << counter;
}



