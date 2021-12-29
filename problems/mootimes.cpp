#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Changes {
	int pos;
	string name;
	int change;
};

bool comp (Changes c1, Changes c2){
    if (c1.pos < c2.pos){
        return true;
    }
    return false;
}

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	
	int n;
	cin >> n;
	Changes cows[n];
	for (int i = 0; i < n; i++) {
		cin >> cows[i].pos;
		cin >> cows[i].name;
		cin >> cows[i].change;
	}

	sort(cows, cows+n, comp);

	

	int b = 0;
	int e = 0;
	int m = 0;
	int counter = 0;
	string leaders = "BEM";

	for (int i = 0; i < n; i++) {
		string newleaders = "";
		if (cows[i].name == "Bessie") {
			b+=cows[i].change;
		}
		else if (cows[i].name == "Elsie") {
			e+=cows[i].change;
		}
		else if (cows[i].name == "Mildred") {
			m+=cows[i].change;
		}
		int maxe = 0;
		if (max(b, e) > max(e, m)) {
			maxe = max(b, e);
		}
		else {
			maxe = max(e, m);
		}
		if (maxe == b) {
			newleaders.append("B");
		}
		if (maxe == e) {
			newleaders.append("E");
		}
		if (maxe == m) {
			newleaders.append("M");
		}
		if (newleaders != leaders) {
			counter++;
			leaders = newleaders;
		}


	}

	cout << counter;

}


