#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int x,y,z;
   cin>>x>>y>>z;
   int  go=(x+(z-1))/z;
   int  high=(y+(z-1))/z;
   cout<< max(go,high)+max(go-1,high)<<endl;
    
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
