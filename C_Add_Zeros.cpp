#include <bits/stdc++.h>
using namespace std;

set<long long> st;
map<long long, vector<long long>> mp;

void dfs(long long n) {
    if (st.count(n)) return;
    st.insert(n);
    for (auto x : mp[n]) {
        dfs(x);
    }
}

void solve() {
    long long n;
    cin >> n;
    vector<long long> vec(n);
    st.clear();
    mp.clear();
    for (long long i = 0; i < n; i++) {
        cin >> vec[i];
    }
    for (long long i = 1; i < n; i++) {
        long long parent = vec[i] + i;
        long long enfant = parent + i;
        mp[parent].push_back(enfant);
    }
    dfs(n);
    if (!st.empty()) {
        cout << *st.rbegin() << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
