#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }

    vector<int> freq(maxi + 1, 0);
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    set<int> unique_elements;
    for (int i = 0; i <= maxi; i++) {
        if (freq[i] == 1) {
            unique_elements.insert(i);
        }
    }

    int max = 0, l = -1, r = -1;
    for (int i = 0, j = 0; j < n; j++) {
        if (unique_elements.count(a[j]) != 0) {
            int length = j - i + 1;
            if (length > max) {
                max = length;
                l = i;
                r = j;
            }
           
        } else {
            i = j + 1;  // Réinitialiser le segment
        }
    }

    cout << (max== 0 ? "0\n" : to_string(l + 1) + " " + to_string(r + 1) + "\n");
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
