#include <bits/stdc++.h>
using namespace std;


bool isDivisible(int numerator, int denominator) {
    return denominator != 0 && numerator % denominator == 0;
}

void solve() {
    long long  n;
    cin >> n;
    string s;
    cin >> s;

    
    long long  moins = 0, plus = 0;
    for (char c : s) {
        if (c == '-') 
            moins++;
        else if (c == '+') 
            plus++;
    }
    long long  tot = abs(plus - moins);
    long long  q;
    cin >> q;

    while (q--) {
        long long  x, y;
        cin >> x >> y;
        if (tot == 0) {
            cout << "YES" << endl;
        } else if (x == y) {
            cout << "NO" << endl;
        } else {
            long long  diff = abs(y - x);
            long long  a=tot * min(x, y);
            if ( a % diff==0 && 
                a<= diff * min(plus, moins)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
               
            }
        }
    }
}

int main() {
    solve();
    return 0;
}
