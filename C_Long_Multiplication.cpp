#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    string x, y;
    cin >> x >> y;
    bool ok = false, ok2 = false;
    int index = -1, index2 = -1;

    for (int i = 0; i < x.length(); i++) {
        if (x[i] > y[i]) {
            ok = true;
            index = i;
            break;
        } else if (x[i] < y[i]) {
            ok2 = true;
            index2 = i;
            break;
        }
    }

    if (ok) {
        for (int i = index + 1; i < x.length(); i++) {
            if (x[i] > y[i]) {
                swap(x[i], y[i]);
            }
        }
    } else if (ok2) {
        for (int i = index2 + 1; i < x.length(); i++) {
            if (x[i] < y[i]) {
                swap(x[i], y[i]);
            }
        }
    }

    cout << x << endl;
    cout << y << endl;
}

int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
