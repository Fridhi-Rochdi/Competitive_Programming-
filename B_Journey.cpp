#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        long long cycle_sum = a + b + c;

       
        long long cnt = n / cycle_sum;
        long long distance = cnt * cycle_sum;

        int day = 0; 
        long long rem = n - distance;

        
        if (rem > 0) {
            day += 1;
            if (rem <= a) {
                cout << cnt * 3 + 1 << endl;
                continue;
            }
            rem -= a;

            day += 1;
            if (rem <= b) {
                cout << cnt * 3 + 2 << endl;
                continue;
            }
            rem -= b;

            day += 1;
            cout << cnt * 3 + 3 << endl;
        } else {
            cout << cnt * 3 << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
