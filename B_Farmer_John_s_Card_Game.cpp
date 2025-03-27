#include <bits/stdc++.h>
using namespace std;

#define MAX_N 2000

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; ++i) {
        cin >> x[i];
        freq[x[i]]++;
    }

    int score = 0;

    for (const auto& [num, count] : freq) {
        int ans = k - num;
         if (freq.count(ans) ) {
            int pairs = min(count, freq[ans]);
            if(num==ans) pairs/=2;
            score += pairs;
            freq[num] -= pairs; 
            freq[ans] -= pairs;
        }
    }
    cout << score << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
