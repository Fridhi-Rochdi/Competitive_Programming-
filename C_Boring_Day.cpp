#include <bits/stdc++.h>
using namespace std;

#define fast_io                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    long long ans = 0, left = 0, right = 0,sum=0;
    while (left < n) {

        while (right<n && sum<l )

        {
             sum+=vec[right];
             right++;
        }
        if(sum<=r  &&  sum>=l){
            ans++;
            sum=0;
            left=right;

        }
        else {
            sum-=vec[left];
             left++;
        }
        
    }
    cout << ans << endl;
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
