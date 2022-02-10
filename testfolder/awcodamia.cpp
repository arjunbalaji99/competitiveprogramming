#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l; cin >> n >> k >> l;
    int c[n];
    for (int i = 0; i < n; i++) cin >> c[i];
    sort(c,c+n,greater<int>());
    int lo = 0, hi = n, ans = 0;
    while (lo <= hi) {
        int mid = (lo + hi)/2;
        bool flag = false;
        int total = 0;
        for (int i = 0; i < mid; i++) {
            if (mid - c[i] > k) flag = true;
            total += max(0, mid - c[i]);
        }
        if (k*l < total) flag = true;
        
        if (flag == false) {
            ans = mid;
            lo = mid + 1;
        }
        else {
            hi = mid -1;
        }
    }
    cout << ans;
}
