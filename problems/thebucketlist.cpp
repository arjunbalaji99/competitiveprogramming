#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("blist.in", "r", stdin);
	freopen("blist.out", "w", stdout);
	

	int n;
	cin >> n;

	int start[n];
	int end[n];
	int buckets[n];

	for (int i = 0; i < n; i++) {
	    cin >> start[i];
	    cin >> end[i];
	    cin >> buckets[i];
	}

	int max = 0;
	for (int i = 1; i <= 1000; i++) {
	    int bucketsneed = 0;

	    for (int j = 0; j < n; j++) {
	        if (start[j] <= i && i <= end[j]) {
	            bucketsneed += buckets[j];
	        }
	    }

	    if (max < bucketsneed) {
	        max = bucketsneed;
	    }
	}

	cout << max;

}