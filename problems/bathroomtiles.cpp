#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()fas {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	int n;
	cin >> n;
	int counter = 0;
	for (int s1 = 0; s1 <= sqrt(n); s1++) {
		for (int s2 = 0; s2 <= sqrt(n); s2++) {
			for (int s3 = 0; s3 <= sqrt(n); s3++) {
				for (int s4 = 0; s4 <= sqrt(n); s4++) {
					if (s1*s1+s2*s2+s3*s3+s4*s4 == n) {
						counter++;
					}
				}
			}
		}
	}
	cout << counter;
	

}	
