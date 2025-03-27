#include <bits/stdc++.h>
using namespace std;

const long long INF = 1E18 + 16;


int BinarySearch(const vector<long long>& b, long long target) {
    int left = 0, right = b.size() - 1;
    int result = b.size(); 

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (b[mid] >= target) {
            result = mid; 
            right = mid - 1;
        } else {
            left = mid + 1; 
        }
    }

    return result;
}

void solve() {
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n), b(m);
    
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    sort(b.begin(), b.end());

    a.insert(a.begin(), -INF);
    n++;

    for (int i = 1; i < n; i++) {
       
        long long target = a[i-1] + a[i];
        int idx = BinarySearch(b, target);

        if (idx == b.size()) continue; 

        long long j = b[idx];
      
        if (a[i] < a[i-1] && j - a[i] < a[i-1]) continue;

      
        a[i] = min((a[i] < a[i-1] ? INF : a[i]), (j - a[i] < a[i-1] ? INF : j - a[i]));
    }

    cout << (is_sorted(a.begin(), a.end()) ? "YES" : "NO") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}