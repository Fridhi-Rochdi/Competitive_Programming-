#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long x, y, z, k;
    cin >> x >> y >> z >> k;
    long long ans = 0;
    if (x * y * z == k)
    {
        cout << 1 << endl;
        return;
    }

    for (int i = 1; i <= x; ++i)
    {
        for (int j = 1; j <= y; ++j)
        {

            long long ij = static_cast<long long>(i) * j;
            if (k % ij == 0)
            {
                long long div = k / ij;

                if (div <= z)
                {

                    long long value = (x - i + 1) * (y - j + 1) * (z - div + 1);
                    ans = max(ans, value);
                }
            }
        }
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
