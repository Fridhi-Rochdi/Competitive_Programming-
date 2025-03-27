#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m, L;
        cin >> n >> m >> L;

        vector<int> l(n), r(n);
        for (int i = 0; i < n; i++) cin >> l[i] >> r[i];

        vector<pair<int, int>> balloons(m);
        for (int i = 0; i < m; i++) {
            cin >> balloons[i].first >> balloons[i].second;
        }

        sort(balloons.begin(), balloons.end());  // Trier les ballons par position `x`

        priority_queue<int> pq;
        int cur = 1, ans = 0, j = 0;
        bool possible = true;

        for (int i = 0; i < n; i++) {
            while (j < m && balloons[j].first < l[i]) {
                pq.push(balloons[j].second);
                j++;
            }

            while (cur < (r[i] - l[i] + 1)) {
                if (pq.empty()) {
                    cout << -1 << "\n";
                    possible = false;
                    break;
                }
                cur += pq.top();
                pq.pop();
                ans++;
            }

            if (!possible) break;  // Éviter d'afficher `ans` après un échec
        }

        if (possible) {
            cout << ans << "\n";
        }
    }

    return 0;
}
