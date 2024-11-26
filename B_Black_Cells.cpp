#include <bits/stdc++.h>
using namespace std;

bool can( vector<long long> a, long long k) {
    int n = a.size();
    int count = 0; 
    int i = 0;

    while (i < n - 1) {
        if (a[i + 1] - a[i] <= k) {
            count++;
            i += 2; 
        } else {
            i++; 
        }
    }
    return count >= (n / 2);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n == 1) {
           
            cout << 1 << endl;
            continue;
        }
        long long left = 0, right = 1e18, answer = right;

        while (left <= right) {
            long long mid = left + (right - left) / 2;

            if (can(a, mid)) {
                answer = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        cout << answer << endl;
    }

    return 0;
}
