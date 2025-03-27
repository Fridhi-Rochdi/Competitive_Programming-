#include <bits/stdc++.h>
using namespace std;

#define MAX_N 2000

void solve() {
    long long  n, k;
    cin >> n >> k;
    vector<long long > vec(n);
    unordered_map<long long , long long> cnt;

   
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        cnt[vec[i]]++;
    }

    long long  res = 0;

    for (auto i : cnt) {
        long long a = i.first;
        long long  count = i.second;

        long long  ans = k - a;
        
        if (cnt.count(ans)) {
            long long  pairs = min(count, cnt[ans]);
            
           
            if (a == ans) pairs /= 2;
            
            res += pairs;

      
            cnt[a] -= pairs;
            cnt[ans] -= pairs;
        }
    }

    cout << res << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
