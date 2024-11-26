#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Lire le tableau d'entrées
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // Créer un tableau de préfixe pour les sommes de a
    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }

    int q;
    cin >> q;

    // Traiter chaque requête
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;

        long long total_sum = 0;

        // On détermine l'indice correspondant dans b
        int index = 0;
        for (int start = 1; start <= n; start++) {
            for (int end = start; end <= n; end++) {
                index++; // Correspond à l'index dans b
                if (index >= l && index <= r) {
                    // Ajouter la somme de a[start] à a[end]
                    total_sum += prefix_sum[end] - prefix_sum[start - 1];
                }
                if (index > r) break; // Sortir si on dépasse r
            }
        }

        cout << total_sum << endl; // Afficher la somme pour la requête courante
    }

    return 0;
}
