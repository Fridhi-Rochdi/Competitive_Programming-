#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long > vec(n);
     long long  ans=0;
   map<long long ,long long >freq;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
  
    for (int i = 0; i < n; i++)
    {
       if(vec[i]==1) ans+=freq[2];
       else if(vec[i]==2) ans+=freq[1];
       ans+=freq[vec[i]];
       freq[vec[i]]++;

    }
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
