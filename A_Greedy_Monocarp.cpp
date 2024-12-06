#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long  x, m;
   int n,k;
   cin>>n>>k;
   vector<int>vec(n);
   for(int i=0;i<n;i++)cin>>vec[i];
   sort(vec.begin(),vec.end(),greater<int>());
   vector<long long >pref(n+1,0);
   if(vec[0]>=k){
    cout<<0<<endl;
    return;
   }
   for(int i=1;i<=n;i++){
    pref[i]=pref[i-1]+vec[i-1];
   }
    
   for(int i=1;i<=n;i++){
      if(pref[i]>k){
       
        cout<<k-pref[i-1]<<endl;
        return;
      }
   }
   cout<<k-pref[n]<<endl;
   
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
