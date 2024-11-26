#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
string complementBinaire(int n) {
   
    int nombreBits = 0;
    int temp = n;
    while (temp > 0) {
        temp >>= 1; 
        nombreBits++;
    }

  
    int masque = (1 << nombreBits) - 1;

  
    int complement = n ^ masque;

  
    return bitset<32>(complement).to_string().substr(32 - nombreBits); 
}

void solve() {
    int n;
    cin>>n;
   string s;
   cin>>s;
  
   if(s[0]=='1' || s[n-1]=='1'){cout<<"YES"<<endl;
    return;}
   for(int i=1;i<n;i++){
    if(s[i]==s[i-1] && s[i] =='1') 
    {cout<<"YES"<<endl;
    return;}
   }
  
   
     cout<<"NO"<<endl;

}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
