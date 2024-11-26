#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    int n;
    cin>>n;
   string s;
   cin>>s;
   vector<int>freq(26,0);
   for(int i=0;i<n;i++){
    freq[s[i]-'a']++;
   }
   for(int i=0;i<n;i++){
       for(int j=0;j<26;j++){
        if(freq[j]){
            freq[j]--;
            cout<<char(j+'a');
        }
       }
   }
   cout<<endl;
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
