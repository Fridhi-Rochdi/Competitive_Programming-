#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        long long x = 0; // The unknown value if exists
        int xIndex = -1; // Index of the unknown value

        // Read the array and find the unknown element (not 1 or -1)
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] != 1 && a[i] != -1) {
                x = a[i];
                xIndex = i;
            }
        }

        // Calculate prefix sums for the array ignoring x
        vector<long long> prefixSum(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefixSum[i + 1] = prefixSum[i] + (i == xIndex ? 0 : a[i]);
        }

        // Use a set to store unique sums
        set<long long> distinctSums;

        // Add all subarray sums ignoring x
        for (int i = 0; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                distinctSums.insert(prefixSum[j] - prefixSum[i]);
            }
        }

        // If x exists, add sums involving x
        if (xIndex != -1) {
            set<long long> newSums;
            for (long long sum : distinctSums) {
                newSums.insert(sum + x);
            }
            distinctSums.insert(newSums.begin(), newSums.end());
        }

        // Output the result
        cout << distinctSums.size() << "\n";
        for (auto sum : distinctSums) {
            cout << sum << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
