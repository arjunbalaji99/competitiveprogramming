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

int n;
vector<int> bales;

int explosions(int start, int direction) {
	int radius = 1;
	int prev = start;


	while (true) {
		int next = prev;
		while (next + direction >= 0 && next + direction < n && abs(bales[next + direction] - bales[prev]) <= radius) {
			next += direction;
		}

		if (next == prev) {
			break;
		}

		prev = next;
		radius++;
	}
	return abs(prev - start);

}

int main() {
	freopen("angry.in", "r", stdin);
	freopen("angry.out", "w", stdout);

	cin >> n;
	bales.resize(n);
	for (int i = 0; i < n; i++) {
	    cin >> bales[i];
	}

	sort(bales.begin(), bales.end());

	int a = 0;
	for (int i = 0; i < n; i++) {
	    a = max(a, explosions(i, 1) + explosions(i, -1) + 1);
	}

	cout << a;

}




