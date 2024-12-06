#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long  x, m;
    cin >> x >> m;
    long long  ans = 0;
   long long   t=min(2*x,m);
    for (int i = 1; i <= t; i++)
    {    
        long long  res = x ^ i;
        if(res!=0){
        if (((x % res == 0) || (i % res== 0))  )
            ans++;
    }}
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
