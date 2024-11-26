#include <bits/stdc++.h>
using namespace std;


void solve() {
   int n;
   cin>>n;
   int zeros=0,ones=0;
   for(int i=0;i<2*n;i++){
       int x;
       cin>>x;
       if(x==0)zeros++;
       else ones++;
   }
   
   if(zeros==2*n || ones==2*n){
    cout<<0<<" "<<0<<endl;
   }
   else {
    cout<<zeros%2<<" "<<min(zeros,ones)<<endl;
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
    
       
    return 0;
}
