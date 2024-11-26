#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    vector<vector<char>> b(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        long long sum1 = 0, sum2 = 0;
        for (int j = 0; j < m; j++) {
            sum1 += (a[i][j] - '0'); 
            sum2 += (b[i][j] - '0');
        }
       
        if (sum1%3 != sum2%3) {
            cout << "NO" << endl;
            return;
        }
    }
    for (int i = 0;i< m; i++) {
        long long sum1 = 0, sum2 = 0;
        for (int j = 0; j < n; j++) {
            sum1 += (a[j][i] - '0'); 
            sum2 += (b[j][i] - '0');
        }
       
        if (sum1%3 != sum2%3) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
