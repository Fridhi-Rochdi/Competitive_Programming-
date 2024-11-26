#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to count triangles in a single test case
long long countTriangles(const vector<int>& a, int n) {
    long long count = 0;
    // Sort the array
    vector<int> sticks = a;
    sort(sticks.begin(), sticks.end());

    // Iterate through each pair of sticks
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            // Use binary search to find the first stick that violates the inequality
            int sum = sticks[i] + sticks[j];
            int k = lower_bound(sticks.begin() + j + 1, sticks.end(), sum) - sticks.begin();
            // Count valid sticks
            count += (k - j - 1);
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << countTriangles(a, n) << "\n";
    }

    return 0;
}
