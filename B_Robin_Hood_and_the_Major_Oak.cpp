#include<bits/stdc++.h>
using namespace std;


int countOdds(int l, int r) {
    int oddStart = (l % 2 != 0) ? l : l + 1; 
    if (oddStart > r) return 0; 
    int oddEnd = (r % 2 != 0) ? r : r - 1; 
    return (oddEnd - oddStart) / 2 + 1;
}

void solve() {
    int n, k;
    cin >> n >> k;
    int l = n - k + 1;
    int r = n;
    int oddCount = countOdds(l, r);
    if (oddCount % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
