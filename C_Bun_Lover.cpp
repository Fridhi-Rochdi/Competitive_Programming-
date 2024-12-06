#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long  n;
    cin >> n;
    long long ans=0;
    ans=n*4+(n-1)*1+3+(n)*(n-3);
    
    cout<<ans<<endl;
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