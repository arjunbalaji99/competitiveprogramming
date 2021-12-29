#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("square.in", "r", stdin);
	//freopen("square.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	int answer = 0;
	int rotations = 0;
	bool boo = true;
	if (n%2 == 0 || m%2 == 0) {
		answer = 0;
		cout << answer;
		return 0;
	}
	while (boo) {
		n /= 2;
		m /= 2;
		if (n%2 == 1 && m%2 == 1) {
			answer += (pow(4,(rotations)));
		}
		else {
			boo = false;
		}
		rotations++;
	}
	answer += (pow(4,(rotations-1)));
	cout << answer;
		
}	