#include <bits/stdc++.h>
using namespace std;

long long count(int n, long long x, long long y, vector<int> &a)
{

    long long sum = accumulate(a.begin(), a.end(), 0LL);

    sort(a.begin(), a.end());

    long long cnt = 0;

    for (int i = 0; i < n; ++i)
    {

        long long elib9a = sum - a[i]; // neftarthou enou fixina l i tawa lawej 3le j

        if (elib9a < x)
            continue;

        long long lowerBound = max(0LL, elib9a - y);
        long long upperBound = elib9a - x;

        int low = upper_bound(a.begin(), a.end(), lowerBound - 1) - a.begin();
        int high = upper_bound(a.begin(), a.end(), upperBound) - a.begin() - 1;

        if (high < low)
            continue;

        if (i >= low && i <= high)
        {
            cnt--;
        }

        cnt += (high - low + 1);
    }

    return cnt / 2;
}
void solve()
{
    int n;
    long long x, y;
    cin >> n >> x >> y;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    cout << count(n, x, y, a) << "\n";
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
