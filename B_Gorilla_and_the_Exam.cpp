#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        /* code */
   
    
    // Déclaration des variables
    int a, b, c;

    // Lecture des entiers a, b, c
    
    cin >> a >> b >> c;

    // Calcul de l'expression (a⊕b) + (b⊕c) + (a⊕c)
    int result = (a ^ b) + (b ^ c) + (a ^ c);

    // Affichage du résultat
    cout<<result<<endl;
    }
    return 0;
}
