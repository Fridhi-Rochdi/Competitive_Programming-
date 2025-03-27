#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m;
    cin >> n >> m;

    long long  x, y;
    cin >> x >> y;

    long long ans = 4 * n * m;
    for (int i = 1; i < n; ++i)
    {
        cin >> x >> y;

        ans -= 2 * (m - x + m - y);
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
