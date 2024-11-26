#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long  a, b, n, m;
    cin >> a >> b >> n >> m;
    
    if(m>min(a,b)){
        cout<<"NO"<<endl;
        return;

    }
    if(a+b<n+m){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        solve(); 
    }
    
    return 0;
}
