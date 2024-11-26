#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7; 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<long long> tab(int k) {
    vector<long long> vec(k + 1);
    vec[0] = 1; 
    for (int i = 1; i <= k; ++i) {
        vec[i] = (vec[i - 1] * 2) % MOD;
    }
    return vec;
}

int main() {
    fast_io;
    
    int t;
    cin >> t;
    
    int maxi = 0; 
    vector<int> cases(t);
for (int i = 0; i < t; ++i){
    int x;cin>>x;
}
    
    for (int i = 0; i < t; ++i) {
        cin >> cases[i];
        maxi = max(maxi, cases[i]); 
    }

  
    vector<long long> a = tab(maxi);
    for (int i = 0; i < t; ++i) {
        cout << a[cases[i]] << endl; 
    }

    return 0;
}
