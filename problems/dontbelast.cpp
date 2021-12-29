#include <bits/stdc++.h>
using namespace std;

struct Cow{ 
	string name;
	int milk;
};

bool comp (Cow c1, Cow c2){
    if (c1.milk < c2.milk)//> = decreasing,  < = increasing
        return true;
    return false;
}



int main() {
	freopen("notlast.in", "r", stdin);
	freopen("notlast.out", "w", stdout);

	int n; cin >> n;
	int b = 0, e = 0, d = 0, g = 0, a = 0, ma = 0, h = 0;
	for (int i = 0; i < n; i++) {
	    string s; int m; cin >> s >> m;
	    if (s == "Bessie") {
	        b+=m;
	    }
	    if (s == "Elsie") {
	        e+=m;
	    }
	    if (s == "Daisy") {
	        d+=m;
	    }
	    if (s == "Gertie") {
	        g+=m;
	    }
	    if (s == "Annabelle") {
	        a+=m;
	    }
	    if (s == "Maggie") {
	        ma+=m;
	    }
	    if (s == "Henrietta") {
	        h+=m;
	    }
	}

	Cow cows[7];
	cows[0].milk = b;
	cows[0].name = "Bessie";
	cows[1].milk = e;
	cows[1].name = "Elsie";
	cows[2].milk = d;
	cows[2].name = "Daisy";
	cows[3].milk = g;
	cows[3].name = "Gertie";
	cows[4].milk = a;
	cows[4].name = "Annabelle";
	cows[5].milk = ma;
	cows[5].name = "Maggie";
	cows[6].milk = h;
	cows[6].name = "Henrietta";

	sort(cows, cows+7, comp);
	bool pass = false;
	int counter = 1;
	while (true) {
	    if (cows[0].milk < cows[counter].milk) {
	    	pass = true;
	        break;
	    }
	    else {
	        counter++;
	    }
	}
	if (pass) {
		cout << cows[counter].name;
	}
	else {
		cout << "Tie";
	}


}






