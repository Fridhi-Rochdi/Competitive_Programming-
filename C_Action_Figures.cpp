#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> zero_indices, one_indices;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            zero_indices.push_back(i);
        } else {
            one_indices.push_back(i);
        }
    }
    reverse(one_indices.begin(), one_indices.end());

    int total_substrings = n * (n + 1) / 2;
    int zero_pos = zero_indices.size() - 1;
    int one_pos = one_indices.size() - 1;
    for (int i = n - 1; i >= 0; --i) {
        while (zero_pos >= 0 && zero_indices[zero_pos] >= i) {
            zero_pos--;
        }
        while (one_pos >= 0 && one_indices[one_pos] >= i) {
            one_pos--;
        }
        if (s[i] == '1') {
            if (zero_pos >= 0 || one_pos >= 0) {
                total_substrings -= (i + 1);
            }
            if (zero_pos >= 0) {
                zero_pos--;
            } else if (one_pos >= 0) {
                one_pos--;
            }
        }
    }

    cout << total_substrings << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
