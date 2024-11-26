#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int a,b;
   cin>>a>>b;
   if(a%2!=0){
        cout<<"NO"<<endl;
        return;
   }
   if(b==0 && a%2==0){
     cout<<"YES"<<endl;
        return;
   } 
   if(b%2==0 && a%2==0){
    cout<<"YES"<<endl;
        return;
   }
   if(b%2!=0){
    if(a-2>=0){
         cout<<"YES"<<endl;
        return;
    }
   }

   cout<<"NO"<<endl;
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
