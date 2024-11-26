#include<bits/stdc++.h>
using namespace std;



void solve() {
    int n,x,y;
    cin>>n>>x>>y;
    if(x<=y) cout<<(n+x-1)/x <<endl;
    else cout<<(n+y-1)/y <<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
