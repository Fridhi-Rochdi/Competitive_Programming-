#include <iostream>
#include <string>
#include <unordered_map>
#include <climits>

using namespace std;

string findInterestingAbbreviation(const string& S, const string& T) {
    unordered_map<char, int> firstPos; // Store the first occurrence of each character in S
    unordered_map<char, int> lastPos; // Store the last occurrence of each character in T

    // Record the first occurrence of each character in S
    for (int i = 0; i < S.size(); i++) {
        if (firstPos.find(S[i]) == firstPos.end()) {
            firstPos[S[i]] = i + 1; // Store 1-based index
        }
    }

    // Record the last occurrence of each character in T
    for (int i = T.size() - 1; i >= 0; i--) {
        if (lastPos.find(T[i]) == lastPos.end()) {
            lastPos[T[i]] = i + 1; // Store 1-based index
        }
    }

    string result = "-1";
    int minLength = INT_MAX;

    // Check each character for interesting abbreviation
    for (const auto& entry : firstPos) {
        char ch = entry.first;
        if (lastPos.find(ch) != lastPos.end()) {
            // Form the abbreviation
            string prefix = S.substr(0, firstPos[ch]);
            string suffix = T.substr(lastPos[ch] - 1);
            string candidate = prefix + suffix;

            // Update result if this candidate is shorter
            if (candidate.size() < minLength) {
                minLength = candidate.size();
                result = candidate;
            }
        }
    }

    return result;
}

int main() {
    string S, T;
    cin >> S >> T;
    cout << findInterestingAbbreviation(S, T) << endl;
    return 0;
}
