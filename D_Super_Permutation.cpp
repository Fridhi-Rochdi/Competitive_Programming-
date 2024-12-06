#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long  n;
    cin >> n;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n%2!=0){
       cout<<-1<<endl;return;
    }
    cout<<n<<" "<<n-1<<" ";
    for(int i=2;i<n;i+=2){
       cout<<i<<" "<<n-i-1<<" ";
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