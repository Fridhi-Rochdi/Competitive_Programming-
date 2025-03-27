#include <bits/stdc++.h>
using namespace std;


int calcul(int a1, int a2, int a3, int a4, int a5) {
    int count = 0;
    if (a3 == a1 + a2) count++;
    if (a4 == a2 + a3) count++;
    if (a5 == a3 + a4) count++;
    return count;
}
void solve(){
int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        
        vector<int> pos = {a4 - a2, a5 - a4, a1 + a2};
        int maxi = 0;

     
        for (int a3 : pos) {
            maxi = max(maxi, calcul(a1, a2, a3, a4, a5));
        }

      
        cout << maxi << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
