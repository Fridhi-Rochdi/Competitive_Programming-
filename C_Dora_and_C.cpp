#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long a, b;
        cin >> n >> a >> b;

        long long gcd = __gcd(a, b);
        vector<long long> c(n);

        for (int i = 0; i < n; i++) {
            cin >> c[i];
            c[i] %= gcd; 
        }

       
        

        sort(c.begin(), c.end());
        long long mini = gcd; 

        for (int i = 0; i < n - 1; i++) {
            mini = min(mini,c[i] - c[i+1]+gcd);
        }
        
        mini = min(mini,  c[n - 1] - c[0]);

        cout << mini << endl;
    }

    return 0;
}
