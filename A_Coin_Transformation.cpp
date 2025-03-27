#include <bits/stdc++.h>
using namespace std;


long long solve(long long n) {
    if (n <= 3) {
        return 1; 
    }
    
    return 2 * solve(n / 4);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
