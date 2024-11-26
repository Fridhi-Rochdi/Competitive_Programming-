#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;  

    long long start = 1;      
    long long end = n;      

  
    while (start < end) {
        long long mid = (start + end) / 2;  

      
        long long val1 = (mid + k - 1 + k) * mid / 2; 
        long long val2 = (k + n - 1 + k) * n / 2 - val1; 

        if (val2 > val1) { 
            start = mid + 1; 
        } else {
            end = mid;
        }
    }

 
    long long val1 = (start + k - 1 + k) * start / 2;
    long long val2 = (k + n - 1 + k) * n / 2 - val1;

   
    long long val1_prev = (start - 1 + k - 1 + k) * (start - 1) / 2;
    long long val2_prev = (k + n - 1 + k) * n / 2 - val1_prev;

    cout << min(abs(val2 - val1), abs(val2_prev - val1_prev)) << endl;
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        solve(); 
    }

    return 0;
}
