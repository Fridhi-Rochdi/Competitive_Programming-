#include <bits/stdc++.h>
using namespace std;
void solve()
{
   int n,k;
   cin>>n>>k;
   vector<int>a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    a[i]-=(a[i]+k-1)/k;
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  
   
    
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