#include <bits/stdc++.h>
using namespace std;
long long sum(int i,int j,vector<int>vec){
    
}
void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    for(int i=0;i<n;i++){

    }

    for(int i = 0; i < m; i++) {
        string d = s[i];
        
        if(d.size() != n) {
            cout << "NO" << endl;
            continue;
        }
        
        unordered_map<char, int> char_to_value;
        unordered_map<int, char> value_to_char;
        bool valid = true;

        for(int j = 0; j < n; j++) {
            char ch = d[j];
            int val = vec[j];

            if(char_to_value.count(ch)) {
                if(char_to_value[ch] != val) {
                    valid = false;
                    break;
                }
            } else {
                char_to_value[ch] = val;
            }

            if(value_to_char.count(val)) {
                if(value_to_char[val] != ch) {
                    valid = false;
                    break;
                }
            } else {
                value_to_char[val] = ch;
            }
        }

        if(valid) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
