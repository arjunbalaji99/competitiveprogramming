#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Rect {
	int x1, y1, x2, y2;

	int area() {
		return (y2-y1) * (x2-x1);
	}
};

int intersect(Rect p, Rect q) {
	int xOverlap = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
	int yOverlap = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
	return xOverlap * yOverlap;
}

bool covered(int x, int y, int x1, int y1, int x2, int y2) {
	return x >= x1 && x <= x2 && y >= y1 && y <= y2;
}

int main() {
	freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);
	
	Rect a, b;
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

	int covereded = 0;
	if (covered(a.x1, a.y1, b.x1, b.y1, b.x2, b.y2)) {
		covereded++;
	}
	if (covered(a.x1, a.y2, b.x1, b.y1, b.x2, b.y2)) {
		covereded++;
	}
	if (covered(a.x2, a.y1, b.x1, b.y1, b.x2, b.y2)) {
		covereded++;
	}
	if (covered(a.x2, a.y2, b.x1, b.y1, b.x2, b.y2)) {
		covereded++;
	}

	if (covereded < 2) {
		cout << a.area();
	}
	else {
		cout << a.area() - intersect(a, b);
	}
}