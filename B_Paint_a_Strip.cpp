#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    
    cin >> n ;

   int res=1;
int cnt=1;


while(cnt<n){
    res++;
    cnt*=2;
    cnt+=2;
}
    cout << res << endl;
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
