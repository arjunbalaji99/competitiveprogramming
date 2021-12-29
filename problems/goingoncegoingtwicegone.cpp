#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;

	int farmers[m];
	for (int i = 0; i < m; i++) {
		cin >> farmers[i];
	}
	for (int i = 0; i < m; i++) {
		int highest = farmers[i];
		int index = i;
		for (int j = i; j < m; j++) {
			if (farmers[j] > highest) {
				highest = farmers[j];
				index = j;
			}
		}

		int temp = farmers[i];

		farmers[i] = farmers[index];

		farmers[index] = temp;
	}
	
	int total = 0;
	int index = 0;
	int postotal;
	for (int i = 0; i < min(m, n); i++) {
		postotal = (farmers[i])*(i+1);
		if (postotal > total) {
			index = i;
			total = postotal;
		}
	}
	

	cout << farmers[index] << " " << (farmers[index]*(index+1));

}


