#include <bits/stdc++.h>
using namespace std;
void solve(){

      int n, m;
        cin >> n >> m; 
        vector<int> vec(n);
         bool ok=0;
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            
        }
        sort(vec.begin(),vec.end());
        if(vec[i])
        
    
        for (int i = 0; i < n; i++) {
            int ans = vec[i].length();
            if (sum + ans<= m) {
               sum += ans;
                count++;
            } else {
                break;
            }
        }
        
        cout << count << endl; 
}

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
      solve();
    }

    return 0;
}
