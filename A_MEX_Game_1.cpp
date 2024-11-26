#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<int> vec(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        mp[vec[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[i] == 1)
            ans++;
        if (ans == 2)
        {
            cout << i << endl;
            return;
        }
        if (mp[i] == 0)
        {
            cout << i << endl;
            return;
        }
    }
    cout<<n<<endl;
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
