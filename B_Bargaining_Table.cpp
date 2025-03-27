#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> vec (n);
    for (int i = 0; i < n; ++i) {
        cin >> vec [i];
    }
   vector<vector<int>> h(n, vector<int>(m, 0)), w(n, vector<int>(m, 0));
    int maxi=0;
     for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (vec [i][j] == '0') { 
                h[i][j] = (i > 0 ? h[i-1][j] : 0) + 1;
                w[i][j] = (j > 0 ? w[i][j-1] : 0) + 1;

                int minWidth = w[i][j];
                for (int k = 0; k < h[i][j]; ++k) {
                    minWidth = min(minWidth, w[i-k][j]);
                    int perimeter = 2 * (minWidth + k + 1);
                    maxi = max(maxi, perimeter);
                }
            }
        }
    }
    cout<<maxi<<endl;
    return 0;
}
