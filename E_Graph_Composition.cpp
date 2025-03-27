#include <bits/stdc++.h>
using namespace std;

map<pair<int, int>, int> mp;
const int MAXN = 2e5 + 9;

vector<int> F[MAXN], G[MAXN]; // F and G graphs
vector<int> vec(MAXN); 
vector<bool> vec1(MAXN); 

int res1 = 0, res2 = 0;

void dfs(int u, bool isGraphG) {
    vec1[u] = true; 

    if (isGraphG) {
        vec[u] = res1; 
    }

    for (int v : (isGraphG ? G[u] : F[u])) { 
        if (!vec1[v]) { 
            if (isGraphG) {
                dfs(v, true);
            } else {
                if (mp.count({u, v}) == 0) { 
                    mp[{u, v}] = 1;
                    dfs(v, false);
                }
            }
        }
    }
}

void solve() {
    int n, m1, m2;
    cin >> n >> m1 >> m2;

    res1 = 0, res2 = 0;
    mp.clear();

    for (int i = 0; i < n; i++) {
        F[i].clear(); 
        G[i].clear();
        vec1[i] = false;
    }

    for (int i = 0; i < m1; i++) {
        int u, v;
        cin >> u >> v;
        F[u - 1].push_back(v - 1); 
        F[v - 1].push_back(u - 1); 
    }

    for (int i = 0; i < m2; i++) {
        int u, v;
        cin >> u >> v;
        G[u - 1].push_back(v - 1);
        G[v - 1].push_back(u - 1); 
    }

   
    for (int i = 0; i < n; i++) {
        if (!vec1[i]) { 
            res1++;
            dfs(i, true);
        }
    }

    fill(vec1.begin(), vec1.begin() + n, false); 

    int ans2 = 0;
    
    for (int i = 0; i < n; i++) {
        for (int v : F[i]) { 
            if (vec[i] != vec[v] && mp.count({i, v}) == 0) {
                ans2++;
                mp[{i, v}] = 1;
            }
        }
    }

   
    for (int i = 0; i < n; i++) {
        if (!vec1[i]) {
            res2++;
            dfs(i, false);
        }
    }


    cout << (res2 - res1) + ans2 / 2 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
