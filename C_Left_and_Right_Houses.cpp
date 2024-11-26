#include <bits/stdc++.h>
using namespace std;

// Function to compute the ceiling of a division of two integers
int ceilDiv(int a, int b) {
    return (a + b - 1) / b;
}

void solve() {
    int n;
    cin >> n; 
    string s;
    cin >> s; 

    vector<int> left(n, 0);  
    vector<int> right(n, 0); 
    
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') left[i] = 1;
        if (s[i] == '1') right[i] = 1;
    }

   
    for (int i = 1; i < n; i++) {
        left[i] += left[i - 1];
    }
    for (int i = n - 2; i >= 0; i--) {
        right[i] += right[i + 1];
    }

    vector<int> ans;
    
   
    for (int i = 0; i < n - 1; i++) {
        if (right[i + 1] >= ceilDiv(n - i - 1, 2) && left[i] >= ceilDiv(i+1, 2)) {
            ans.push_back(i+1);
        }
    }
    if (right[0] >= ceilDiv(n, 2)) ans.push_back(0);  
    if (left[n - 1] >= ceilDiv(n, 2)) ans.push_back(n );  

    sort(ans.begin(), ans.end());
    
   
    int mini = n;
    int cur = ans[0];
    for (int i = 0; i < (int)ans.size(); i++) {
        if (abs(n - 2 * ans[i]) < mini) {
            mini = abs(n - 2 * ans[i]);
            cur = ans[i];
        }
    }
    cout << cur << endl;  
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
