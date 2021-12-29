/*
ID: arjunba2
PROG: milk2
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

/*
struct Cow{ 
	int size, pos;
};

bool comp (Cow c1, Cow c2){
    if (c1.pos < c2.pos)//> = decreasing,  < = increasing
        return true;
    return false;
}
*/


int main() {
	//freopen("milk2.in", "r", stdin);
	//freopen("milk2.out", "w", stdout);

	 char ttt[3][3];
	 for (int i = 0; i < 3; i++) {
	 	for (int j = 0; j < 3; j++) {
	 		cin >> ttt[i][j];
	 	}
	 }

	 //singlewinner
	 int single = 0;
	 string s = "";
	 for (int m = 0; m < 3; m++) {
	 	for (int j = 0; j < 3; j++) {
	 		int count = 0;
	 		char c = ttt[m][j];
	 		if (s.find(c) != std::string::npos) {
			    continue;
			}
			else {
				for (int i = 0; i < 3; i++) {
			    	if (ttt[i][0] == c && ttt[i][1] == c && ttt[i][2] == c) count++;
			    }
			    for (int i = 0; i < 3; i++) {
			    	if (ttt[0][i] == c && ttt[1][i] == c && ttt[2][i] == c) count++;
			    }
			    if (ttt[0][0] == c && ttt[1][1] == c && ttt[2][2] == c) count++;
			    if (ttt[0][2] == c && ttt[1][1] == c && ttt[2][0] == c) count++;
			    if (count > 0) {
					single++;
				}
			}
			s += c;
	 	}
	 }

	 //multiwinner
	 int doub = 0;
	 s = "";
	  for (int m = 0; m < 3; m++) {
	 	for (int j = 0; j < 3; j++) {
	 		char c = ttt[m][j];
 			string s1 = "";
 			s1 += c;
	 		if (s.find(c) != std::string::npos) {
	 			continue;
	 		}
	 		else {
	 			for (int k = 0; k < 3; k++) {
	 			for (int l = 0; l < 3; l++) {
			 		int count = 0;
	 				char c2 = ttt[l][k];
	 				if (s1.find(c2) != std::string::npos) {
	 					continue;	
	 				}
	 				else {
	 					for (int i = 0; i < 3; i++) {
				    		if ((ttt[i][0] == c || ttt[i][0] == c2) && (ttt[i][1] == c || ttt[i][1] == c2) && (ttt[i][2] == c || ttt[i][2] == c2)) {
				    			if (ttt[i][0] == c && ttt[i][1] == c && ttt[i][2] == c) {
				    				count--;
				    			}
				    			else if (ttt[i][0] == c2 && ttt[i][1] == c2 && ttt[i][2] == c2) {
				    				count--;
				    			}
				    			count++;
				    		}
					    }
					    for (int i = 0; i < 3; i++) {
				    		if ((ttt[0][i] == c || ttt[0][i] == c2) && (ttt[1][i] == c || ttt[1][i] == c2) && (ttt[2][i] == c || ttt[2][i] == c2)) {
				    			if (ttt[0][i] == c && ttt[1][i] == c && ttt[2][i] == c) {
				    				count--;
				    			}
				    			else if (ttt[0][i] == c2 && ttt[1][i] == c2 && ttt[2][i] == c2) {
				    				count--;
				    			}
				    			count++;
				    		}
					    }
					    if ((ttt[0][0] == c || ttt[0][0] == c2) && (ttt[1][1] == c || ttt[1][1] == c2) && (ttt[2][2] == c || ttt[2][2] == c2)) {
			    			if (ttt[0][0] == c && ttt[1][1] == c && ttt[2][2] == c) {
			    				count--;
			    			}
			    			else if (ttt[0][0] == c2 && ttt[1][1] == c2 && ttt[2][2] == c2) {
			    				count--;
			    			}
			    			count++;
				    	}
				    	if ((ttt[0][2] == c || ttt[0][2] == c2) && (ttt[1][1] == c || ttt[1][1] == c2) && (ttt[2][0] == c || ttt[2][0] == c2)) {
			    			if (ttt[0][2] == c && ttt[1][1] == c && ttt[2][0] == c) {
			    				count--;
			    			}
			    			else if (ttt[0][2] == c2 && ttt[1][1] == c2 && ttt[2][0] == c2) {
			    				count--;
			    			}
			    			count++;
				    	}
				    	if (count > 0) {
				    		doub++;
				    	}
				    	s1 += c2;
	 				}
			 	}	
			 	}
	 		}
	 		s += c;	
	 	}
	 }

	 cout << single << endl << doub/2;

}








