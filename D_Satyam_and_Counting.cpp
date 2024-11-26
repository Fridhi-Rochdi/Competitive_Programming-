#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
  set<pair<int, int>> points;
   
    for (int i = 0; i < n; i++) {
        cin >> vec[i].first >> vec[i].second;
          points.insert({vec[i].first, vec[i].second});
    }

    long long ans = 0;

  
    unordered_map<int, int> xCount, yCount;

 
    for (int i = 0; i < n; i++) {
        xCount[vec[i].first]++;
        yCount[vec[i].second]++;
    }

   
    for (int i = 0; i < n; i++) {
        int ans1 = xCount[vec[i].first] - 1; 
        int ans2 = yCount[vec[i].second] - 1; 

       
        if (ans1 > 0 && ans2 > 0) {
            ans += max(ans1, ans2);
        }
    }
    for (const auto& p : points) {
            int x = p.first;
            int y = p.second;

           
            if (points.count({x - 1, y ^ 1}) && points.count({x + 1, y ^ 1})) {
                ans++;
            }
        }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
