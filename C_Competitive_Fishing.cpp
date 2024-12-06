#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> vec;
    int sum = 0;
    for (int i = n - 1; i > 0; i--) {
        if (s[i] == '1') {
            sum += 1;
        } else {
            sum -= 1;
        }
        if (sum > 0) {
            vec.push_back(sum);
             
            }
    }
    sort(vec.rbegin(), vec.rend());
    int ans = 1;
    for (int i = 0; i < vec.size(); i++) {
        k -= vec[i];
        ans++;
        if (k <= 0) break;
    }
    if (k > 0)
        cout << -1 << endl;  
    else
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
