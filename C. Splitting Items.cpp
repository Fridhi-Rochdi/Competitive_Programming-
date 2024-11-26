#include <bits/stdc++.h>
using namespace std;

// Function to check if all elements in the vector are zero
bool zeros(vector<long long>& vec) {
    for (long long x : vec) {
        if (x != 0) return false;
    }
    return true;
}

void solve() {
    long long n;
    cin >> n;
    vector<long long> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];

    int ans = 0;
    vector<int> vec1;

    while (ans <= 40) {
        if (zeros(vec)) {
            cout << ans << endl;
            for (int x : vec1) {
                cout << x << " ";
            }
            cout << endl;
            return; 
        }
        ans++;
        sort(vec.begin(), vec.end());


        int rem = (vec[0] + vec[n-1]) / 2;
        vec1.push_back(rem);

       
        for (int i = 0; i < n; i++) {
            vec[i] = abs(vec[i] - rem);
        }
    }
    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
