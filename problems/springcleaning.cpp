#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	
	int n, nl;
	cin >> n >> nl;

	int squirrels[n];
	int startstop[n][2];
	for (int i = 0; i < n; i++) {
		squirrels[i] = 0;
		startstop[i][0] = 0;
		startstop[i][1] = 0;
	}

	for (int i = 0; i < nl; i++) {
		int num, h, m;
		string s;
		cin >> num >> s >> h >> m;

		if (s == "START") {
			startstop[num-1][0] = ((h*60) + m);
		}	
		else {
			startstop[num-1][1] = ((h*60) + m);
			squirrels[num-1] += ((startstop[num-1][1]) - (startstop[num-1][0]));
			startstop[num-1][1] = 0;
			startstop[num-1][0] = 0;
		}

	}
	
	for (int i = 0; i < n; i++) {
		int temp = squirrels[i];
		int hours = temp/60;
		cout << hours << " " << temp - (hours * 60) << endl; 
	}
}


