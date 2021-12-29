/*
ID: arjunba2
PROG: milk2
LANG: C++                 
*/

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

struct Rect {
	int x1, y1, x2, y2;
};

int main() {
	//freopen("milk2.in", "r", stdin);
	//freopen("milk2.out", "w", stdout);
	
	Rect a, b;
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;	
    
    int covered = 0;
	//top right corner
	if ((b.x1 <= a.x2 && a.x2 <= b.x2) && (b.y1 <= a.y2 && a.y2 <= b.y2)) {
		covered++;
	}
	//top left corner
	if ((b.x1 <= a.x1 && a.x1 <= b.x2) && (b.y1 <= a.y2 && a.y2 <= b.y2)) {
		covered++;
	}
	//bottom left corner
	if ((b.x1 <= a.x1 && a.x1 <= b.x2) && (b.y1 <= a.y1 && a.y1 <= b.y2)) {
		covered++;
	}
	//bottom right corner
	if ((b.x1 <= a.x2 && a.x2 <= b.x2) && (b.y1 <= a.y1 && a.y1 <= b.y2)) {
		covered++;
	}
	if (covered < 2) {
		cout << (a.x2 - a.x1) * (a.y2 - a.y1);
		return 0;
	}
	if (covered == 4) {
		cout << 0;
		return 0;
	}
	int minx = 2002;
	int miny = 2002;
	int maxx = 0;
	int maxy = 0;
	bool grid[2001][2001];
	for (int i = 0; i < 2001; i++) {
		for (int j = 0; j < 2001; j++) {
			grid[i][j] = true;
		}
	}
	for (int i = a.x1 + 1000; i < a.x2 + 1000; i++) {
		for (int j = a.y1 + 1000; j < a.y2 + 1000; j++) {
			grid[i][j] = false;
		}
	}
	for (int i = b.x1 + 1000; i < b.x2 + 1000; i++) {
		for (int j = b.y1 + 1000; j < b.y2 + 1000; j++) {
			grid[i][j] = true;
		}
	}
	
	for (int i = 0; i < 2001; i++) {
		for (int j = 0; j < 2001; j++) {
			if (grid[i][j] == false) {
				minx = min(minx, i);
				miny = min(miny, j);
				maxx = max(maxx, i);
				maxy = max(maxy, j);
			}

		}
	}
	cout << (maxx - minx + 1) * (maxy - miny + 1);
	
}






