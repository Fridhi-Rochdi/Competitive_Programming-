#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> vec(n);
    vector<pair<int, int>> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        a[i] = {vec[i], i};
    }
    
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    sort(b.begin(), b.end());
    sort(a.begin(), a.end());
    
    int j = 0;
    vector<int> res(n);
    
    for (int i = 0; i < n; i++) {
       
        while (j < n && (b[j] < a[i].first - k || b[j] > a[i].first + k)) {
            j++;
        }
        if (j < n) {
            res[a[i].second] = b[j];
            j++;  
        }
    }

    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
