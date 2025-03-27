#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        int max_val = s[i] - '0', pos = i;
        for (int j = i + 1; j <= min(i + 9, (int)s.length() - 1); j++) {
            int curr_val = s[j]-'0' - (j - i);
            if (curr_val > max_val) {
                max_val = curr_val;
                pos = j;
            }
        }
         while (pos > i) {
            swap(s[pos], s[pos - 1]);
            pos--;
        }
        s[i] = char(max_val + '0');
    }
    cout << s << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
