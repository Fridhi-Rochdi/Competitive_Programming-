#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        freq[vec[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if ((n - 2) % vec[i] == 0) {
            int mid = (n - 2) / vec[i];
            if (freq[mid] > (vec[i] == mid ? 1 : 0)) {
                cout << vec[i] << " " << mid << endl;
                return;
            }
        }
    }

   
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}