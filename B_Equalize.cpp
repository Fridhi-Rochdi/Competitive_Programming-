#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    int r = vec.size(); 
    
    int cnt = 0, cnt1 = 0;
    for (int i = 0; i < r; i++) {
        while (vec[i] - vec[cnt1] >= n) {
            cnt1++;
        }
       
        cnt = max(cnt, i - cnt1 + 1);
    }
    
    cout << cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
