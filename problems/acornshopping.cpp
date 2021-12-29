#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Acorns {
	int del;
	int price;
	double tpm;
	int index;
};

bool comp (Acorns c1, Acorns c2){
    if (c1.tpm > c2.tpm){
        return true;
    }
    return false;
}

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	
	int n;
	cin >> n;
	
	Acorns acorns[n];
	for (int i = 0; i < n; i++) {
		cin >> acorns[i].del;
		cin >> acorns[i].price;
		acorns[i].tpm = (double)acorns[i].del/acorns[i].price;
		acorns[i].index = i;
	}

	sort(acorns, acorns+n, comp);
	
	int price = 0;
	for (int i = 0; i < 3; i++) {
		price += acorns[i].price;
	}

	cout << price << endl;
	for (int i = 0; i < 3; i++) {
		cout << acorns[i].index+1 << endl;
	}

	
}


