#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> vec(n);
    
    for (int i = 0; i < n; i++) {
        cin >> vec[i];   
    }

    int   ans = 0;
    sort(vec.begin(), vec.end());
    
    vec[n]=-999;
    for (int i = 0; i < n; i++) {
        int j = i;
        while ( vec[i] == vec[j]) j++;
        int count1 = j - i;
        
       
        int k = j;
        while (vec[k] == vec[i] + 1) k++;
        int count2 = k - j;
        
       
        for (int m = 0; m <= count1; m++) {
            int cur = m * vec[i];
            if (cur > d) break;
            int nextcur = min(count2, (d - cur) / (vec[i] + 1));
            ans = max(ans, cur + nextcur * (vec[i] + 1));
        }
        i=j;
    }

    cout << ans << endl;
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
