#include <bits/stdc++.h>
using namespace std;
bool Parfait(int n) {
    if (n < 0) {
        return false; 
    }
    int racine = static_cast<int>(sqrt(n));
    return (racine * racine == n && racine%2!=0);
}
void solve()
{
   
   int n;
   cin>>n;
   vector<int>vec(n);
   long long  ans=0,sum=0;
   for(int i=0;i<n;i++){
    cin>>vec[i];
    sum+=vec[i];
    if(Parfait(sum) ) ans++;
   }
  

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
    return 0;
}
