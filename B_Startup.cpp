#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    map<int, long long> mp;

    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        mp[x] += y; 
    }

    vector<long long> vec;
    for (auto i : mp) {
        vec.push_back(i.second); 
    }
    sort(vec.rbegin(), vec.rend());

    long long ans = 0;
   
    for (int i = 0; i < min(n, (int)vec.size()); i++) {
        ans += vec[i];
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
