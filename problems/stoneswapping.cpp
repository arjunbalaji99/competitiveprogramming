#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Cow {
	int start;
	int time;
};

bool comp (Cow c1, Cow c2){
    if (c1.start < c2.start)
        return true;
    return false;
}



int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);

	int n;
	cin >> n;

	Cow cows[n];
	for (int i = 0; i < n; i++) {
		cin >> cows[i].start;
		cin >> cows[i].time;
	}

	sort(cows, cows+n, comp);
	
	int currenttime = 0;
	int duration = 0;
	for (int i = 0; i < n; i++) {
		if(currenttime > cows[i].start) {
			duration += cows[i].time;
		}
		else {
			duration += (cows[i].start - currenttime);
			duration += cows[i].time;
		}
		currenttime = duration;
	}

	cout << duration;

	
}


