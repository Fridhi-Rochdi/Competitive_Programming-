#include <bits/stdc++.h>
using namespace std;

long double calculerDistance(long double x1, long double y1, long double x2, long double y2) {
    long double dx = x1 - x2;
    long double dy = y1 - y2;
    return sqrt(dx * dx + dy * dy);
}

void solve() {
    int n;
    cin >> n;
    vector<pair<long double, long double>> vec(n);

   
    for (int i = 0; i < n; i++) {
        long double x, y;
        cin >> x >> y;
        vec[i] = {x, y};
    }

    long double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    
    long double dis = calculerDistance(x1, y1, x2, y2);

  
    long double mini = LDBL_MAX;

   
    for (int i = 0; i < n; i++) {
        mini = min(calculerDistance(x2, y2, vec[i].first, vec[i].second), mini);
    }

    
    if (mini <= dis) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
