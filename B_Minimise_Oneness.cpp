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
   string s="";
   for(int i=0;i<n-1;i++) s+="0";
   s+="1";
   cout<<s<<endl;;

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
