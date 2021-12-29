/*
ID: arjunba2
PROG: milk2
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

/*
struct Cow{ 
	int source;
	int des;
	int dir;
};

bool comp (Cow c1, Cow c2){
    if (c1.source < c2.source)//> = decreasing,  < = increasing
        return true;
    return false;
}
*/


int main() {
	//freopen("milk2.in", "r", stdin);
	//freopen("milk2.out", "w", stdout);
	
	int n; cin >> n;
	int days[7] = {0};
	int counter = 2;
	for (int year = 1900; year <= 1900 + n - 1; year++) {
		for (int month = 1; month <= 12; month++) {
			if (month == 4 || month == 6 || month == 9 || month == 11) {
				for (int day = 1; day <= 30; day++) {
					if (day == 13) {
						days[counter]++;
					}
					counter++;
					if (counter > 6) {
						counter = 0;
					}
				}
			}
			else if (month == 2) {
				if (year != 1900 && year != 2100 & year != 2200 & year != 2300 && year % 4 == 0) {
					for (int day = 1; day <= 29; day++) {
						if (day == 13) {
							days[counter]++;
						}
						counter++;
						if (counter > 6) {
							counter = 0;
						}
					}
				}
				else {
					for (int day = 1; day <= 28; day++) {
						if (day == 13) {
							days[counter]++;
						}
						counter++;
						if (counter > 6) {
							counter = 0;
						}
					}
				}
			}
			else {
				for (int day = 1; day <= 31; day++) {
					if (day == 13) {
						days[counter]++;
					}
					counter++;
					if (counter > 6) {
						counter = 0;
					}
				}
			}
		}
	}
	cout << days[0];
	for (int i = 1; i < 7; i++) {
		cout << " " << days[i];
	}
	cout << endl;
}








