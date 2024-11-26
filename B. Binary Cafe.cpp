#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
   sort(vec.begin(),vec.end());
    int left = -1, right = 1e9;
    while (right - left > 1) {
        int mid = (right + left) / 2;
        
        int cnt1 = 0;
        while (cnt1 < n - 1 && vec[cnt1 + 1] - vec[0] <= 2 * mid) {
            cnt1++;
        }

        int cnt2 = n - 1;
        while (cnt2 >=1 && vec[n - 1] - vec[cnt2 - 1] <= 2 * mid) {
            cnt2--;
        }

        cnt1++;
        cnt2--;

        if (cnt1 > cnt2 || vec[cnt2] - vec[cnt1] <= 2 * mid) {
            right = mid;
        } else {
            left = mid;
        }
    }

    cout << right << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
