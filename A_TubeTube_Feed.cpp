#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int ans = -1;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (k == 0)
        {
            cout << ans << endl;
            return;
        }
        if (k >= a[i])
        {
            if (maxi < b[i])
            {
                ans = i + 1;
                maxi = b[i];
            }
        }
        k--;
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
}