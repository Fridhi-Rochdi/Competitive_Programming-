#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n, -1);

    for (int i = 0; i < n; i++)
    {
        a[(x - 1 + i) % n] = (i % 2);
    }
    if (abs(x - y) % 2 == 0 || n % 2 != 0)
    {
        a[x - 1] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
