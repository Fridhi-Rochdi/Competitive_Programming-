#include <bits/stdc++.h>
using namespace std;

// Function to compute mex of a vector
int computeMex(const vector<int>& vec) {
    unordered_set<int> s(vec.begin(), vec.end());
    int mex = 0;
    while (s.count(mex)) mex++;
    return mex;
}

// Function to compute f(i) for a given i
int computeF(int i, const vector<vector<int>>& sequences) {
    int x = i;
    for (const auto& seq : sequences) {
        vector<int> temp = seq;
        temp.push_back(x);
        x = computeMex(temp);
    }
    return x;
}

// Function to solve the problem for a single test case
long long solveTestCase(int n, int m, const vector<vector<int>>& sequences) {
    // Find the maximum value in all sequences
    int maxInSequences = 0;
    for (const auto& seq : sequences) {
        for (int num : seq) {
            if (num > maxInSequences) maxInSequences = num;
        }
    }

    // Precompute f(i) for i up to maxInSequences + 2
    int limit = maxInSequences + 2;
    vector<int> f(limit + 1);
    for (int i = 0; i <= limit; ++i) {
        f[i] = computeF(i, sequences);
    }

    // Find the maximum value of f(i) (stabilization point)
    int fMax = f[limit];

    // Compute the sum from 0 to m
    long long sum = 0;
    if (m <= limit) {
        for (int i = 0; i <= m; ++i) {
            sum += f[i];
        }
    } else {
        // Sum up to limit
        for (int i = 0; i <= limit; ++i) {
            sum += f[i];
        }
        // Add (m - limit) * fMax
        sum += (long long)(m - limit) * fMax;
    }

    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> sequences(n);
        for (int i = 0; i < n; ++i) {
            int l;
            cin >> l;
            sequences[i].resize(l);
            for (int j = 0; j < l; ++j) {
                cin >> sequences[i][j];
            }
        }
        cout << solveTestCase(n, m, sequences) << '\n';
    }

    return 0;
}