#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases
    while (t--) {
        int n;
        cin >> n;  // Read the number of columns

        vector<int> row1(n), row2(n);
        for (int i = 0; i < n; i++) {
            cin >> row1[i];  // Read the first row
        }
        for (int i = 0; i < n; i++) {
            cin >> row2[i];  // Read the second row
        }

        // DP arrays to store the maximum cost to reach (1, j) and (2, j)
        vector<int> dp1(n), dp2(n);

        // Initialize the starting points
        dp1[0] = row1[0];
        dp2[0] = row2[0];

        // Fill the dp arrays
        for (int j = 1; j < n; j++) {
            dp1[j] = max(dp1[j-1] + row1[j], dp2[j-1] + row1[j]);
            dp2[j] = max(dp1[j-1] + row2[j], dp2[j-1] + row2[j]);
        }

        // The result is the maximum sum at the last column
        cout << max(dp1[n-1], dp2[n-1]) << endl;
    }
    
    return 0;
}
