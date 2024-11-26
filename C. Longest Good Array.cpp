#include <bits/stdc++.h>
using namespace std;

void solve() {
  int r,l;
  cin>>r>>l;
  int ans=r;
  int cnt=0;
  while(ans<=l){
  cnt++;
  ans+=cnt;
  }
  cout<<cnt<<endl;

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