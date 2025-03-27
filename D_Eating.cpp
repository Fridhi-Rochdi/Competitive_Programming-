#include <bits/stdc++.h>
using namespace std;

const int MAX_BITS = 30;  // La valeur max de wi est inférieure à 2^30

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    // Table pour stocker le dernier indice de chaque MSB
    vector<vector<int>> pre(n + 1, vector<int>(MAX_BITS, -1));
    
    // Remplir les préfixes avec les indices des MSB
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < MAX_BITS; j++) {
            pre[i + 1][j] = pre[i][j];
        }
        int msb = 31 - __builtin_clz(w[i]);  // Trouver le MSB de w[i]
        pre[i + 1][msb] = i;
    }

    // Répondre aux requêtes
    while (q--) {
        int x;
        cin >> x;

        int msb_x = 31 - __builtin_clz(x);  // Trouver le MSB de x
        int i = n;
        int score = 0;

        // Tant qu'on a un MSB inférieur à celui de x, on mange les slimes
        while (i > 0 && pre[i][msb_x] != -1) {
            score++;
            i = pre[i][msb_x];
            x ^= w[i - 1];  // Appliquer XOR
            msb_x = 31 - __builtin_clz(x);  // Mettre à jour le MSB de x
        }

        cout << score << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
