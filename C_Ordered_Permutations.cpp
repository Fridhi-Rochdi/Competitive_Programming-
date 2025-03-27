#include <bits/stdc++.h>
using namespace std;
string entierVersBinaire(long long n) {
    string binaire = ""; 
    if (n == 0) return "0"; 

    while (n > 0) {
        binaire = to_string(n % 2) + binaire; 
        n /= 2;
    }

    return binaire;

}
void solve() {
     long long n,k;cin>>n>>k;
     string s=entierVersBinaire(k);
     if(n<=41 &&  k>1LL>>(n-1)){
        cout<<"-1"<<endl;
        return;
     }
     vector<int >vec(n-1,0);
     for(int i=0;i<s.size();i++){
           if(s[i]=='1')d[i]=1;
     }
     for(int i=)



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
