#include <bits/stdc++.h>
using namespace std;

// Function to calculate modular inverse using Fermat's Little Theorem
long long modInverse(long long a, long long m) {
    long long result = 1, base = a;
    long long exponent = m - 2; // Valid when m is prime
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % m;
        }
        base = (base * base) % m;
        exponent /= 2;
    }
    return result;
}

void solve() {
    long long n, m;
    cin >> n >> m; 
    
    vector<long long> vec(n);
    long long prod = 1;
    for (auto &x : vec) {
        cin >> x;  
    }
   string s;cin>>s;
   int l=0,r=n-1;
   
   for(int i=0;i<n-1;i++){
        l=(s[i]=='L' ? ++l : l);
        r=s[i]=='R' ? --r:r;
   }
  vector<int>vec1(n+1,1);
  vec1[n] = vec[l]%m;
  for(int i=n-1;i>0;i--){
        if(s[i-1] == 'L'){l--; vec1[i]= (vec1[i+1]%m*vec[l]%m)%m;}

        else if( s[i-1]=='R'){r++; vec1[i]= (vec1[i+1]%m*vec[r]%m)%m;}

    

    
  }
    for(int i  = 1 ; i<=n;i++)cout<<vec1[i]<<" ";
    cout<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
