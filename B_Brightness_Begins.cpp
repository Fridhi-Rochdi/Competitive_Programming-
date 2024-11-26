#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long n;
    cin >> n;
    long long left = 0, right = 3e18;

    while (left + 1 < right) {
        long long mid = (left + right) / 2;

      
        long long ans = mid - (int)(sqrtl(mid)); 

        if (ans < n) {
            left = mid; 
        } else {
            right = mid;  
        }
    }

    cout << right  << endl; 
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
