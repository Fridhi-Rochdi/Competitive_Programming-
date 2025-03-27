#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &x : vec) cin >> x;

    vector<int> freq(n + 1, 0);
    for (int i = 0; i < n; i++) {
        freq[vec[i]]++;
    }

    vector<bool> prev(n + 1, false), curr(n + 1, false);
    prev[0] = true; 

    for (int x = 1; x <= n; ++x) {
        fill(curr.begin(), curr.end(), false); 
        
        for (int j=0;j<n;j++) {
            if (!prev[j]) continue;
        
            for (int k = 0; k <= freq[x] + j; ++k) {
                if ((freq[x] +j- k) % 2 == 0 && !(k > 0 && freq[x] + j - k < 2) && k <= n) 
                    curr[k] = true;
            }
        }
        
      
        swap(prev, curr);
    }

    
    cout << (prev[0] ? "Yes" : "No") << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
