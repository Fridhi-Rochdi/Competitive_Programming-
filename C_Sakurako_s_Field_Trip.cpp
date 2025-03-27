#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n; 
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i]; 
    }

    
    for (int i = 0; i < n / 2; i++) {
       
        if (vec[i] == vec[i + 1] || vec[n - 1 - i] == vec[n - 2 - i]) {
            swap(vec[i+1], vec[n - 2 - i]);
        }
    }

    int ans=0;
    for (int i = 0; i < n-1; i++) {
       if(vec[i]==vec[i+1]) ans++;
    }
    cout <<ans<<"\n";
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
