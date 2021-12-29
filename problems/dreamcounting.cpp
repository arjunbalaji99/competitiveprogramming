#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	int m, n;
	cin >> m >> n;

	int zeros = 0;
	int ones = 0;
	int twos = 0;
	int threes = 0;
	int fours = 0;
	int fives = 0; 
	int sixes = 0;
	int sevens = 0;
	int eights = 0;
	int nines = 0;

	for (int i = m; i <= n; i++) {
		string s = to_string(i);
		for (int j = 0; j < s.length(); j++){
			if (s[j] == '0') {
				zeros+=1;
			}
			if (s[j] == '1') {
				ones+=1;
			}
			if (s[j] == '2') {
				twos+=1;
			}
			if (s[j] == '3') {
				threes+=1;
			}
			if (s[j] == '4') {
				fours+=1;
			}
			if (s[j] == '5') {
				fives+=1;
			}
			if (s[j] == '6') {
				sixes+=1;
			}
			if (s[j] == '7') {
				sevens+=1;
			}
			if (s[j] == '8') {
				eights+=1;
			}
			if (s[j] == '9') {
				nines+=1;
			}
			
		}
	}

	cout << zeros << " " << ones << " " <<  twos << " " <<  threes << " " <<  fours << " " <<  fives << " " <<  sixes << " " <<  sevens << " " <<  eights << " " <<  nines;


}	




