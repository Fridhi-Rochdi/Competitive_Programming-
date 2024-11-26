#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<long long >vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    long long  l = 1 , r  = 2e9+1;
    while(l + 1 < r){
        long long mid = (l+r)/2;
        long long consumption = 0; 
        for(int i = 0; i < n;i++)consumption += max(0LL, mid - vec[i]);
        if(consumption <= k) l = mid;
        else r = mid;
    }
    cout<<l<<endl;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       solve();
    }
    
}