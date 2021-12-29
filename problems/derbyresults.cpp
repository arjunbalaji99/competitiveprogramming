#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	int n;
	cin >> n;

	int horses[n];
	for (int i = 0; i < n; i++) {
		int h, m, s;
		cin >> h >> m >> s;

		int time = (h*3600) + (m*60) + s;

		horses[i] = time;
		
	}

	sort(horses, horses+n);

	for (int i = 0; i < n; i++) {
		int h = horses[i]/3600;
		int m = (horses[i] - (h*3600))/60;
		int s = horses[i] - (h*3600) - (m*60);

		cout << h << " " << m << " " << s << endl;
	}
	

}


