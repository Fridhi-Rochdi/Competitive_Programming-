#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, b;
    cin >> s >> b;

    // Maps to store first and last occurrences of characters
    map<char, int> first_s, last_b;

    // Populate first_s with the first occurrence indices in s
    for (int i = 0; i < s.length(); i++) {
        if (first_s.find(s[i]) == first_s.end()) {
            first_s[s[i]] = i;
        }
    }

    // Populate last_b with the last occurrence indices in b
    for (int i = 0; i < b.length(); i++) {
        last_b[b[i]] = i;
    }

    vector<string> candidates;

    // Generate candidate strings based on common characters
    for (auto e : first_s) {
        char c = e.first;
        if (last_b.find(c) != last_b.end()) {
            int first_index_s = e.second;
            int last_index_b = last_b[c];
            
            // Create substrings and concatenate
            string prefix = s.substr(0, first_index_s + 1);
            string suffix = b.substr(last_index_b);
            candidates.push_back(prefix + suffix);
        }
    }

    // Find the minimal-length string among candidates
    string result = "-1";
    if (!candidates.empty()) {
        result = candidates[0];
        for (const string& str : candidates) {
            if (str.length() < result.length()) {
                result = str;
            }
        }
    }

    cout << result << endl;
}

int main() {
    int t;
    cin >> t;  // Read the number of test cases
    while (t--) {
        solve();  // Call solve function for each test case
    }
    return 0;
}
