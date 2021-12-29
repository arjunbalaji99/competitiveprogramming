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


int main() {
	//freopen("milk2.in", "r", stdin);
	//freopen("milk2.out", "w", stdout);
	
	string n; cin >> n;
	string n16 = n + "0000";
	n = "0000" + n;

	int carry = 0;
	string ans = "";
	for (int i = n.length()-1; i >= 0; i--) {
		int num1 = n[i] - 48;
		int num2 = n16[i] - 48;
		int sum = num1 + num2 + carry;
		int result = sum % 2;
		ans = to_string(result) + ans;

		carry = sum / 2;
	}
	if (carry != 0) {
		ans = to_string(carry) + ans;
	}
	cout << ans;
	

}




