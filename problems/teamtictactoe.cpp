#include <bits/stdc++.h>
using namespace std;


char ttt[3][3];

bool solo(char a) {
	if (ttt[0][0] == a && ttt[1][1] == a && a == ttt[2][2]) {
		return true;
	}
	else if (ttt[2][0] == a && a == ttt[1][1] && a == ttt[0][2]) {
		return true;
	}

	for (int i = 0; i < 3; i++) {
		if (ttt[0][i] == a && ttt[1][i] == a && a == ttt[2][i]) {
			return true;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (ttt[i][0] == a && a == ttt[i][1] && a == ttt[i][2]) {
			return true;
		}
	}

	return false;
}
bool check3 (char a, char b, char one, char two, char three) {
  if (one != a && one != b) return false;
  if (two != a && two != b) return false;
  if (three != a && three != b) return false;
  
  if (one != a && two != a && three != a) return false;
  if (one != b && two != b && three != b) return false;
  
  return true;
}
bool team(char ch1, char ch2)
{
  if (check3(ch1, ch2, ttt[0][0], ttt[1][1], ttt[2][2])) return true;
  if (check3(ch1, ch2, ttt[0][2], ttt[1][1], ttt[2][0])) return true;
 
  for (int i=0; i<3; i++) {
    if (check3(ch1, ch2, ttt[0][i], ttt[1][i], ttt[2][i])) return true;
    if (check3(ch1, ch2, ttt[i][0], ttt[i][1], ttt[i][2])) return true;
  }
  
  return false; 
}

int main() {
	freopen("tttt.in", "r", stdin);
	freopen("tttt.out", "w", stdout);

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> ttt[i][j];
		}
	}

	int counter1 = 0;
	for (char c = 'A'; c <= 'Z'; c++) {
		if (solo(c)) {
			counter1++;
		}
	}
	cout << counter1 << endl;

	int counter2 = 0;
	for (char c = 'A'; c <= 'Z'; c++) {
		for (char c1 = c+1; c1 <= 'Z'; c1++) {
			if (team(c, c1)) {
				counter2++;
			}
		}
	}

	cout << counter2 << endl;

}


