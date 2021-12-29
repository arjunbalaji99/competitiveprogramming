#include <bits/stdc++.h>
using namespace std;


int main() {
	//freopen("diamond.in", "r", stdin);
	//freopen("diamond.out", "w", stdout);

	int n;
	cin >> n;

	int p[n];
	for (int i = 0; i < n; i++) {
	    cin >> p[i];
	}	
	int counter = 0;
	for (int i = 0; i < n; i++) {
	    for (int j = n-1; j >= i; j--) {
	        double average = 0;
	        for (int k = i; k <= j; k++) {
	            average+=p[k];
	        }
	        average /= (j - i + 1);
	        bool av = false;
	        for (int k = i; k <= j; k++) {
	            if (p[k] == average) {
	                av = true;
	            }
	        }
	        if (av == true) {
	            counter++;
	        }
	    }

	}

	cout << counter;
	
}
