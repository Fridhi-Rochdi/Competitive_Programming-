#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

 
    vector<string> vec;
    vec.push_back("1");
    string s = "1";
    
    while (true) {
      
        int carry = 0;
        string next = "";
        
        for (int i = s.size() - 1; i >= 0; i--) {
            int digit = (s[i] - '0') * 3 + carry;
            carry = digit / 10;
            next.push_back((digit % 10) + '0');
        }
        
        if (carry > 0) {
            next.push_back(carry + '0');
        }

      
        reverse(next.begin(), next.end());
        
       
        if (next.size() > n.size()) break;
        
        vec.push_back(next);
        s= next;
    }

   
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == n) {
            cout << i << endl;
            return 0;
        }
    }
    
    cout << -1 << endl;
    return 0;
}
