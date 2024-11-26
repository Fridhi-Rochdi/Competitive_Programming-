#include <bits/stdc++.h>
using namespace std;

#define fast_io                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    long long ans = 0;
    int cnt = 0;

   
    while (true)
    {
        if (cnt % 2 == 0)
            ans -= (cnt * 2 + 1);
        else
            ans += (cnt * 2 + 1); 

   
        if (ans < -n)
        {
            cout << "Sakurako" << endl;
            return;
        }
        if (ans > n)
        {
            cout << "Kosuke" << endl;
            return;
        }

        cnt++;
    }
}

int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
