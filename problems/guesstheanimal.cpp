#include <bits/stdc++.h>
using namespace std;

/*
struct Cow {
	int day;
	string cow;
	int change;
};

bool comp (Cow c1, Cow c2){
    if (c1.day < c2.day)//it will sort the array by population in decreasing order
        return true;
    return false;
}
*/

vector <string> questions[100];

int common(int i, int j) {
	int counter = 0;
	for (int l = 0; l < questions[i].size(); l++) {
		for (int k = 0; k < questions[j].size(); k++) {
			if (questions[i][l] == questions[j][k]) {
				counter++;
			}
		}
	}
	return counter;
}

int main() {
	freopen("guess.in", "r", stdin);
	freopen("guess.out", "w", stdout);
	
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
	    string s;
	    int k;
	    cin >> s >> k;
	    for (int j = 0; j < k; j++) {
	        string charact;
	        cin >> charact;
	        questions[i].push_back(charact);
	    }
	}
	
	int max = 0;
	for (int i = 0; i < n; i++) {
	    for (int j = i+1; j < n; j++) {
	        if (common(i, j) > max) {
	            max = common(i, j);
	        }
	    }
	}

	cout << max+1;
}




