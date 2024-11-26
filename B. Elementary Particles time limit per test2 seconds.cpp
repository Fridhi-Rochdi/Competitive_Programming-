#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    int cnt1 = 0;

    while (vec.size() > 1) {
        if (cnt1 % 2 == 0) {
            vec[0] = vec[1]; 
            vec.erase(vec.begin() + 1); 
        } else {
           
            vec.erase(vec.begin() + vec.size() - 1);
        }
        cnt1++;
    }
    cout << vec[0] << endl; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
