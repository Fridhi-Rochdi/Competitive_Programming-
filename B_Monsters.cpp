#include <bits/stdc++.h>
using namespace std;

bool temchy(int x, int y)
{
    int ans = x ^ y;  // Calcul de l'opération XOR entre x et y
    return (x % ans == 0) && (y % ans == 0);  // Vérification si le résultat de XOR est un diviseur de x et de y
}

void solve()
{
    int x, m;
    cin >> x >> m;  // Lecture des valeurs
    int ans = 0;
    // Boucle pour tester chaque valeur de i
    for (int i = 1; i <= 2 * x; i++)
    {
        if (temchy(x, i))  // Si le résultat de XOR est un diviseur de x et i
            ans++;  // Incrémenter le compteur
    }
    cout << ans << endl;  // Afficher le nombre de résultats valides
}

int main()
{
    int t;
    cin >> t;  // Nombre de tests
    while (t--) 
    {
        solve();  // Appeler la fonction pour chaque test
    }
    return 0;
}
