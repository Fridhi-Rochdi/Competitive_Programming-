#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> solve(long long n, long long k) {
    if (n < k) {
        return {0, 0}; 
    }
    
   
    auto DPR = solve(n / 2, k);
    long long ans1 = DPR.first;
    long long cnt1 = DPR.second;

    if (n & 1) { 
        long long m = (n + 1) / 2;
        long long sumc = m + ans1 * 2 + cnt1 * m;
        long long cnt = cnt1 * 2 + 1;
        return {sumc, cnt};
    } else { 
        long long m = n / 2;
        long long sumc = ans1 * 2 + cnt1 * m;
        long long cnt = cnt1 * 2;
        return {sumc, cnt};
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        cout << solve(n, k).first << endl;
    }
    return 0;
}
