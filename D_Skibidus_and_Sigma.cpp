#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll calculateScore(vector<int> &arr)
{
    ll total = 0;
    ll prefixSum = 0;
    for (int num : arr)
    {
        prefixSum += num;
        total += prefixSum;
    }
    return total;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m));
    vector<ll> pref(n);

    
    for (int i = 0; i < n; ++i)
    {
        ll sum = 0;
        for (int j = 0; j < m; ++j)
        {
            cin >> vec[i][j];
            sum += vec[i][j];
        }
        pref[i] = sum;
    }

  
    vector<int> pref1(n);
    iota(pref1.begin(), pref1.end(), 0);
    sort(pref1.begin(), pref1.end(), [&](int a, int b) {
        return pref[a] > pref[b];
    });

   
    vector<int> res;
    for (int idx : pref1)
    {
        res.insert(res.end(), vec[idx].begin(), vec[idx].end());
    }


    ll score = calculateScore(res);
    cout << score << '\n';
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
