#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	//freopen("inputf.in", "r", stdin);
	//freopen("outputf.out", "w", stdout);
	string one, two;
	cin >> one >> two;
	int first = 0;
	int counter = 0;
	int counter2 = 0;
	for (int i = 0; i < two.length(); i++) {
		if (one.substr(0, counter) == two.substr(counter2, counter)) {
			counter++;
		}
		else {
			if (counter > first) {
				first = counter;
			}
			counter = 0;
			counter2 = i;
			i-=1;
		}
	}
	if (counter > first) {
		first = counter;
	}
	int second = 0;
	int counter3 = 0;
	int counter4 = 0;
	for (int i = 0; i < one.length(); i++) {
		if (two.substr(0, counter3) == one.substr(counter4, counter3)) {
			counter3++;
		}
		else {
			if (counter3 > second) {
				second = counter3;
			}
			counter3 = 0;
			counter4 = i;
			i-=1;
		}
	}
	if (counter3 > second) {
		second = counter3;
	}
	cout << max(first, second);

}	




