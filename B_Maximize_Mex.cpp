#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    vector<int> freq(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= n)
        {
            freq[a[i]]++;
        }
    }

    for (int mex = 0; mex <= n; mex++)
    {
        if (freq[mex] == 0)
        {

            cout << mex << endl;
            break;
        }
        if (freq[mex] > 1)
        {

            if (mex + x <= n)
            {
                freq[mex + x] += freq[mex] - 1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        
    }
}
