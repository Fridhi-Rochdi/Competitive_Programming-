#include <bits/stdc++.h>
using namespace std;

string toBinary(long long num) {
    bitset<64> bin(num); 
    return bin.to_string();  
}

long long toLongLong(const string& bin) {
    bitset<64> b(bin);
    return b.to_ullong();  
}

void solve() {
    int l, r;
    cin >> l >> r;
    
    string s1 = toBinary(l);
    string s2 = toBinary(r);
    
    string s3 = "", s4 = "", s5 = "";
    int cnt = 0;
    if(l==r){
        cout<<0
<<endl;    }
    
    for (int i = 0; i < 64; i++) {
        if (s1[i] == s2[i]) {
           
            s4 += s1[i];
            s5 += s2[i];
            cnt++;
        } else {
            break;
        }
    }

    
     
     s4+='1';
     s5+='0';
     

    for (int i = cnt+1; i < 64; i++) {
        
        s4 += '0';
        s5 += '1';
    }
     

    s4[s4.length()-1]='0';
    long long res2 = toLongLong(s4);
    long long res3 = toLongLong(s5);
    s3=s5;
    s3[s3.length()-1]='0';
    long long res1 = toLongLong(s3);
    if(res1<l){
        res1=r;
    }
     if(res1==0 && l>0){
        res1=r;
    }

    cout << res1 << " " << res2 << " " << res3 << endl;

   
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
