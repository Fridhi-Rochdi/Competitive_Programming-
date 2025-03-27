#include <bits/stdc++.h>
using namespace std;

const int N = 4 * 10000 + 1;
const int MOD = 1e9 + 7;


bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() {
  
    vector<int> palindromes;
    for (int i = 1; i < N; i++) {
        if (isPalindrome(i)) {
            palindromes.push_back(i);
        }
    }

   
    vector<long long> dp(N, 0);
    dp[0] = 1; 
    for (int p : palindromes) {
        for (int i = p; i < N; i++) {
            dp[i] = (dp[i] + dp[i - p]) % MOD;
        }
    }

   
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }

    return 0;
}
