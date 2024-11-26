#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long  n;
    cin >> n;
    vector<long long > vec(n+1);
    for (int i = 1 ; i <= n; i++) cin >> vec[i];
    long long cnt = 0;
    for (int i = 1; i < n; i++) {
        for (int j = vec[i]-i; j <= n; j+=vec[i]) {
           if(i < j  && vec[i]*vec[j] == i+j) cnt++;
        }
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
