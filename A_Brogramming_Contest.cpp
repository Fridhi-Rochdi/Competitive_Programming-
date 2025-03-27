#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt0=0,cnt1=0,ans=0;
    for(int i=0;i<n-1;i++){
       if(s[i]!=s[i+1])ans++;
    }
    if(s[0]=='1')ans++;
    cout<<ans<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
