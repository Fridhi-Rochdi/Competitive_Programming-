#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    vector<int> vec(n);
    int mini = INT_MAX,ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (vec[i] % 2 == 0)
            ans++;
        mini = min(mini, vec[i]);
    }
   if(ans==n || mini%2!=0)  cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
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
