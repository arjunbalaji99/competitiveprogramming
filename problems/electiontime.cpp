#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Cow {
	int cownumber;
	int votesa;
	int votesb;
};

bool comp (Cow c1, Cow c2){
    if (c1.votesa > c2.votesa)//it will sort the array by population in decreasing order
        return true;
    return false;
}

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	
	int n, k;
	cin >> n >> k;

	Cow votes[n];
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		votes[i].cownumber = i+1;
		votes[i].votesa = a;
		votes[i].votesb = b;
	}

	sort(votes, votes+n, comp);
	int highest = 0;
	int index = 0;
	for (int i = 0; i < k; i++) {
		if (votes[i].votesb > highest) {
			index = votes[i].cownumber;
			highest = votes[i].votesb;
		}
	}

	cout << index;
	
}