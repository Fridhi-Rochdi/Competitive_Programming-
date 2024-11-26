#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long x;
        cin >> x;

        if (x < 0) {
            cout << "impossible\n";
            continue;
        }

        long double fx_sq = x + 0.5;
        long double fx_sq_minus_a = x - 0.5;

        if (fx_sq < 0 || fx_sq_minus_a < 0) {
            cout << "impossible\n";
            continue;
        }

        long double a = 2 * (fx_sq - x);
        long double term = x * x - a * a * 0.25;
        
        if (term < 0) {
            cout << "impossible\n";
            continue;
        }

        long double result = 2 * sqrt(term) / a;
        cout << static_cast<long long>(result) << endl;
    }

    return 0;
}
