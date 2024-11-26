#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

        // Sort the array
        sort(a.begin(), a.end());

        // Check if the smallest three elements can form a triangle
        if (a[0] + a[1] > a[2]) {
            // Already satisfies triangle inequality
            cout << 0 << endl;
        } else {
            // If not, make all elements equal to a[n-1] or a[n-2]
            cout << n - 2 << endl;
        }
    }
    return 0;
}
