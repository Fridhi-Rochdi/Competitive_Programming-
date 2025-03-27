#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n; 
    vector<long long > vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i]; 
    }
    vector<long long >pref(n+1,0);
    set<long long >st{0};
    int ans=0;
    for (int i = 0; i < n ; i++) {
        pref[i+1]=vec[i]+pref[i];
        if(st.count(pref[i+1])){
            st.clear();
            ans++;
            pref[i+1]=0;
            
        }
        st.emplace(pref[i+1]);

    }




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
