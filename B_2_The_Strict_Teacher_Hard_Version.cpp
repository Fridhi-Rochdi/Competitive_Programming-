#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> vec1(m);
    for (int i = 0; i < m; i++) {
        cin >> vec1[i];
    }
    
    sort(vec1.begin(), vec1.end());

    vector<int> vec2(q);
    for (int j = 0; j < q; j++) {
        cin >> vec2[j];
    }

    for (int i = 0; i < q; i++) {
     
        auto it = upper_bound(vec1.begin(), vec1.end(), vec2[i]);
        int index = it - vec1.begin(); 

        if (index == 0) {
            cout << vec1[0] - 1 << endl;  
        } else if (index == m) {
            cout << n - vec1[m-1] << endl; 
        } else {
            cout << (vec1[index] - vec1[index - 1]) / 2 << endl; 
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
