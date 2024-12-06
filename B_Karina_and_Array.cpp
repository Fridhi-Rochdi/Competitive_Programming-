#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    long long ans = -1;
    long long maxi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    cout <<max( a[n-2] * a[n-1] ,a[0]*a[1])<< endl;
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