#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long  x, m;
   int n;
   cin>>n;
   map<int,int>mp;

   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    mp[x]++;
   }
   int ans=0,cnt=0,cnt1=0;
   for(auto i:mp){
    if(i.second==1) cnt++;
    if(i.second>1) cnt1++;
   }

   cout<<(2*((cnt+1)/2) )+ cnt1<<endl;
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
