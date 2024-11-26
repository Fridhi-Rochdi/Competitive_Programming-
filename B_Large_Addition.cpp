#include <iostream>
#include <string>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
bool solve(string x) {
    int n = x.length();
    if (x[0] != '1') {
        return false;
    }
    for (int i = 1; i < n - 1; i++) {
        if (x[i] < '1' || x[i] > '9') {
            return false;
        }
    }
    if (x[n - 1] < '0' || x[n - 1] > '8') {
        return false;
    }
    return true;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        if (solve(x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
