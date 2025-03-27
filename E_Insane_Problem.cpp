 #include<bits/stdc++.h>
using namespace std;

void solve(){
  long long  k,l1,r1,l2,r2;
  cin>>k>>l1>>r1>>l2>>r2;
  long long ans=0,an=1;
 while (an<=1e9)
 {
    long long  cnt1=ceil((double)l2/an);
   long long  cnt2=floor((double)r2/an);
    long long start = max(l1, cnt1);
        long long end = min(r1, cnt2);
        ans+=max(0LL,end-start+1);an*=k;
 }
 cout<<ans<<endl;

 

  }




int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
