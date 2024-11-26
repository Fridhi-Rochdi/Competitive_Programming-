#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> vec(n);
    ll maxi = LLONG_MIN;

    for (ll i = 0; i < n; i++)
    {
        cin >> vec[i];
        maxi = max(maxi, vec[i]);
    }

    ll pgcd = 0;
    for (ll i = 0; i < n; i++)
    {
        pgcd = gcd(pgcd, maxi - vec[i]);
    }
    pgcd = max(pgcd, 1LL);
    set<ll> st(vec.begin(), vec.end());

    ll ans = -1;
    for (ll k = 0; k <= n; k++)
    {
        ll candidate = maxi - k * pgcd;
        if (st.find(candidate) == st.end())
        {
            ans = candidate;
            break;
        }
    }

    if (ans == -1)
    {
        ans = maxi + pgcd;
        maxi = ans;
    }

    ll sum = 0;
    if (ans != -1)
    {
        sum += (maxi - ans) / pgcd;
    }

    for (ll i = 0; i < n; i++)
    {
        sum += (maxi - vec[i]) / pgcd;
    }

    cout << sum << endl;
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
