#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long  n;
    cin >> n ;
    vector<long long > vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
       
    }
    for (int i = 0; i < n-1; i++) {
        if(vec[i]>vec[i+1]){
            cout<<"NO"<<endl;
            return;
        }
            vec[i+1]-=vec[i];
        vec[i]=0;  
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
