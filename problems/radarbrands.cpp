#include <bits/stdc++.h>
using namespace std;

#define ll long long



int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	
	int n;
	cin >> n;
	int counter = 0;
	while (true) {
		counter++;
		string s = to_string(n);
		string srev = "";
		for (int i = s.size()-1; i >= 0; i--) {
			srev += s[i];
		}


		int n1, n2;
		stringstream geek(s);
		geek >> n1;

		stringstream geek1(srev);
		geek1 >> n2;

		n = n1+n2;
		s = to_string(n);
		srev = "";
		for (int i = s.size()-1; i >= 0; i--) {
			srev += s[i];
		}
		if (s.substr(0, s.size()/2) == (srev.substr(0, srev.size()/2))) {
			cout << counter;
			cout << " " << n;
			break;
		}
		

	}


}