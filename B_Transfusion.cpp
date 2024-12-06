#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

bool canMakeEqual(const vector<int>& a, int n) {
    if (n < 3) return false; // Problem constraint guarantees n >= 3.
    long long total_sum = accumulate(a.begin(), a.end(), 0LL);
    // The sum must be divisible by n for all elements to be equal.
    if (total_sum % n != 0) return false;

    long long target = total_sum / n;
    long long prefix_sum = 0;
    for (int i = 0; i < n; ++i) {
        // Calculate excess or deficit compared to the target.
        prefix_sum += a[i] - target;
        // If prefix_sum is negative at any point, it's impossible to balance the array.
        if (prefix_sum < 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (canMakeEqual(a, n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
