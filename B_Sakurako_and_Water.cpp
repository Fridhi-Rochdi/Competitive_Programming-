#include <bits/stdc++.h>
using namespace std;

#define fast_io                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    
    int ans = 0;

   
    for (int z = 0; z< n; z++) {
        int maxi = 0;
        int i = z, j = 0;
        while (i < n && j < n) {
            if (a[i][j] < 0)
                maxi = min(maxi, a[i][j]);
            i++;
            j++;
        }
        
        ans += abs(maxi);
    }

   
    for (int z = 1; z < n; z++) {
        int maxi = 0;
        int i = 0, j = z;
        while (i < n && j < n) {
            if (a[i][j] < 0)
                maxi = min(maxi, a[i][j]);
            i++;
            j++;
        }
       
        ans += abs(maxi);
    }

   
    cout << ans << endl;
}

int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
