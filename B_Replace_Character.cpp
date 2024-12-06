#include <bits/stdc++.h>
using namespace std;


bool estCarreParfaitImpair(int n) {
    if (n < 0) {
        return false;
    }
    int racine = static_cast<int>(sqrt(n));
    return (racine * racine == n && racine % 2 != 0);
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
     if(n==1){
        cout<<s<<endl;
        return;
     }
   
    map<char, long long > freq;
    for (int i = 0; i < n; i++) {
        freq[s[i]]++;
    }

   
    char plus= '\0', moins = '\0';
    int max = 0, min = INT_MAX;

    for (auto i: freq) {
        if (i.second > max) {
            max = i.second;
            plus = i.first;
        }
       
    }
    freq[plus]++;
    for (auto i: freq) {
       
        if (i.second < min) {
            min = i.second;
            moins = i.first;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (s[i] == moins) {
            s[i] = plus;
             cout << s << endl;
             return;
        }
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
