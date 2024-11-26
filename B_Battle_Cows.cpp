#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    int n, l;
    cin >> n >> l;
    l--;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int index = n , index2 = n ;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] > vec[l] && index == n)
        {
            index = i;
        }
        else if (vec[i] > vec[l] && index2 == n)
        {
            index2 = i;
            break;
        }
    }
    int ans = index - 1;
    if (index != n + 1 && l > index)
    {
        int second = min(l, index2);
        if (index == 0)
            index++;
        ans = max(ans, second - index);
    }
    cout << ans << endl;
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
