#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    
    
    vector<long long> vec(n);
    long long sum = 0;
    
    
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        sum += vec[i];
    }

   if(n<=2){
    cout<<-1<<endl;
    return;
   }
    sort(vec.begin(), vec.end());
    cout << max(0LL, vec[n / 2] * 2 * n - sum + 1) << endl;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        solve();
    }
    return 0; // Good practice to return a value from main
}
