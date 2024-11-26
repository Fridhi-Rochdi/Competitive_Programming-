#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<string> stt;

    for (int i = 0; i < n - 1; i++) {
        string ans = s.substr(i, 2);  
        stt.insert(ans);
    }

    cout << stt.size() << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
