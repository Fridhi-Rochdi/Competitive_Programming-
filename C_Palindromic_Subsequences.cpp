#include <bits/stdc++.h>
using namespace std;





int main() {
    int n, t;
    cin >> t;
    
   
    while (t--) {
       
        cin >> n;
        cout << "1 ";
        for (int i = 2; i <= n - 2; i++) {
            cout << i - 1 << " ";  
        }
        cout << "1 2" << endl;
    }
    
    return 0;
}
