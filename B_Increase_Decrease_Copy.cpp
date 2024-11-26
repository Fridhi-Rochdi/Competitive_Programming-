#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve() {
    long long n;
    cin >> n;
    vector<long long> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<long long> vec1(n + 1); 
    for (int i = 0; i <= n; i++) {
        cin >> vec1[i];
    }
    long long ans = 0, mini = LLONG_MAX, ans1 = 0, index = 0;
    for (int i = 0; i < n; i++) {
        
        mini = min(mini, abs(vec[i] - vec1[n]));
        mini = min(mini, abs(vec1[i] - vec1[n])); 
        if(vec1[n]<=max(vec[i],vec1[i]) && vec1[n]>=min(vec[i],vec1[i])) mini=0;
        ans += abs(vec[i] - vec1[i]);
        
    }
    cout<<ans+mini+1<<endl;
     
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
