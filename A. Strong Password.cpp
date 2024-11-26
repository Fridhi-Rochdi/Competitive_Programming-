#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    deque<int> dq;
    int cnt = 0;

    for (int i = 0; i < n; ++i) {
        char res = s[i];
        if (res == '_') {
            if (dq.empty()) {
                res = '(';
            } else {
                res = ')';
            }
        }
        if (res == ')') {
            if (!dq.empty()) {
                cnt += i - dq.back();
                dq.pop_back();
            }
        } else if (res == '(') {
            dq.push_back(i);
        }
    }

    cout << cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
