#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("square.in", "r", stdin);
	//freopen("square.out", "w", stdout);
	
	int n;
	cin >> n;
	int arr[n][2];
	double maxdis = 0;
	double distance = 0;
	int dancer1;
	int dancer2;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		arr[i][0] = a;
		arr[i][1] = b;
	}
	for (int i = 0; i < n; i++) {
		
		for (int j = i+1; j < n; j++) {
			distance = sqrt(pow((arr[i][0] - arr[j][0]),2)+pow((arr[i][1] - arr[j][1]),2));
			if (distance > maxdis) {
				maxdis = distance;
				dancer1 = i;
				dancer2 = j;
			}
		}
	}
	cout << (dancer1+1) << " " << (dancer2+1);

	
}	