#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin >> n>>k;
    int s1 = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        
        if(x>=k) 
        {ans+=x;s1 += x;}
        if (x == 0 && ans != 0 )
        {
            ans--;
            
        }
    }
    cout << s1 - ans << endl;
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