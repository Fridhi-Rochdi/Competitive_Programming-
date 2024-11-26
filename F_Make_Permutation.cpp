#include <bits/stdc++.h>
using namespace std;

bool canFormPermutation(int n, vector<int>& a) {
    unordered_set<int> used; // To track which numbers in [1, n] are assigned

    // Sort the array in descending order so we try the largest values first
    sort(a.rbegin(), a.rend());

    for (int x : a) {
        while (x > 0) {
            if (x <= n && used.find(x) == used.end()) {
                // If x is in range and not used, mark it as used
                used.insert(x);
                break;
            }
            // Unset the lowest set bit (reduce x)
            x /= 2;
        }
    }

    // Check if we were able to assign all numbers from 1 to n
    return used.size() == n;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (canFormPermutation(n, a)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
