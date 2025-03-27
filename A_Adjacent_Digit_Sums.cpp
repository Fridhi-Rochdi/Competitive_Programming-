#include <iostream>
using namespace std;
void solve(){
    int x, y;
    cin >> x >> y;
    if (y == x + 1 || y < x && (x - y + 1) % 9 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    } 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}