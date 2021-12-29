#include <bits/stdc++.h>
using namespace std;

/*
struct Cow{ 
	string name;
	int milk;
};

bool comp (Cow c1, Cow c2){
    if (c1.milk < c2.milk)//> = decreasing,  < = increasing
        return true;
    return false;
}
*/


int main() {
	freopen("outofplace.in", "r", stdin);
	freopen("outofplace.out", "w", stdout);

	int n;
	cin >> n;

	int nums[n];
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	
	int sorted[n];
	for (int i = 0; i < n; i++) {
		sorted[i] = nums[i];
	}

	sort(sorted, sorted+n);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (sorted[i] != nums[i]) {
			ans++;
		}
	}

	cout << ans-1;
}






