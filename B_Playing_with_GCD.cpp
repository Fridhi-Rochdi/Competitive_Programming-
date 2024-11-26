#include <bits/stdc++.h>
using namespace std;

int pgcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / pgcd(a, b)) * b;
}

void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<int> vec1(n + 1);

   
    vec1[0] = vec[0];
    for (int i = 1; i < n; i++) {
        vec1[i] = lcm(vec[i - 1], vec[i]);
    }
    vec1[n] = vec[n - 1];

    
    for (int i = 0; i < n; i++) {
        if (pgcd(vec1[i], vec1[i + 1]) != vec[i]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
