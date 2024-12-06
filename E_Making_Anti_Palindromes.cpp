#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long  n;
    cin >> n;
    string s;
    cin>>s;
    
    if(n%2!=0){
       cout<<-1<<endl;return;
    }
    map<char,int>mp;
    for(int i=0;i<n;i++){
      mp[s[i]]++;
    }
     for(auto c:mp){
        if(c.second>n/2){
            cout<<-1<<endl;
            return;
        }
       
    }
    int ans=0;
    map<char,int>mp2;
    for(int i=0;i<n/2;i++){
         if(s[i]==s[n-i-1]) {
            ans++;
            mp2[s[i]]++;
            }
    }
    int maxi=0;
    for(auto c:mp2){
        maxi=max(maxi,c.second);
       
    }
    cout<<max(maxi,(ans+1)/2)<<endl;
    
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