#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    int diff = y - x; 
    int step = 1;

   
    for (int i = 1; i <= diff; i++) {
        if (diff % i == 0 && (diff / i + 1) <= n) {
            step = i;
            break;
        }
    }

    vector<int> vec; 
    int cnt = x;
    while (vec.size() < n && cnt <= y) {
        vec.push_back(cnt);
        cnt += step;
    }

    cnt = x - step; 
    while (vec.size() < n && cnt > 0) {
        vec.insert(vec.begin(), cnt);
        cnt -= step;
    }


    cnt = y + step;
    while (vec.size() < n) {
        vec.push_back(cnt);
        cnt += step;
        }
    for (int i: vec) {
        cout << i<< " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
