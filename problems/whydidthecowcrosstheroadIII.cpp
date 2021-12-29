#include <bits/stdc++.h>
using namespace std;


struct Cow {
	int start;
	int time;
};

bool comp (Cow c1, Cow c2){
    if (c1.start < c2.start)//> = decreasing,  < = increasing
        return true;
    return false;
}


int main() {
	freopen("cowqueue.in", "r", stdin);
	freopen("cowqueue.out", "w", stdout);

	int n;
	cin >> n;

	Cow cows[n];

	for (int i = 0; i < n; i++) {
		cin >> cows[i].start >> cows[i].time;
	}

	sort(cows, cows+n, comp);

	int time = 0;
	for (int i = 0; i < n; i++) {
		if (time >= cows[i].start) {
			time += cows[i].time;
		}
		else {
			time = cows[i].start;
			time += cows[i].time;
		}
	}

	cout << time;

}




