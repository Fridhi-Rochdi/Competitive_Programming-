#include <bits/stdc++.h>
using namespace std;


bool isDivisible(int numerator, int denominator) {
    return denominator != 0 && numerator % denominator == 0;
}

void solve() {
    long long  n;
    cin >> n;
    vector<int>vec(n);
    int cnt=0;
   for(int i=0;i<n;i++) {
       cin>>vec[i];
       if(vec[i]==0) {
           cnt++;
       }
    }
    if(cnt==n){
        cout<<0<<endl;
        return;

    }
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(vec[i]==0) cnt2++;
        else break;
    }
    for(int i=n-1;i>=0;i--){
        if(vec[i]==0) cnt1++;
        else break;
    }
    if(cnt1+cnt2==cnt){
        cout<<1<<endl;
        return;
    }
    else{
        cout<<2<<endl;
        return;  
    }
    
}

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
}
