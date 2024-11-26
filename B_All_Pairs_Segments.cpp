#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long n, q;
    cin >> n >> q;

    vector<long long> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    vector<long long> ans1(q);
    vector<long long> resultas(n);
    resultas[0] = n - 1;
    resultas[1] = 2 * n - 3;
    for (int i = 2; i < n; i++) {
        resultas[i] = n + resultas[i - 1] - 2 * i;  
    }

  
    map<long long, long long> mp;
    mp[resultas[0]] = 1;

   
    for (int i = 1; i < n; i++) {
        mp[resultas[i]]++;
        
        if (vec[i] - vec[i - 1] > 1) {
            mp[resultas[i - 1] - i + 1] += vec[i] - vec[i - 1] - 1;
        }
    }

    long long totalPairs = (n * (n - 1)) / 2;

    for (int i = 0; i < q; i++) {
        cin >> ans1[i];
        if (ans1[i] <= totalPairs) {
            cout << mp[ans1[i]] << " ";
        } else {
            cout << "0" << " ";
        }
    }
    cout << endl;
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
