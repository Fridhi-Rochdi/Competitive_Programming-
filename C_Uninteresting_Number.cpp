#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    long long sum = 0;
    long long sum1 = 0;
    map<int, int> mp; 

    for(int i = 0; i < s.length(); i++){
        sum += s[i] - '0';
        
      
        if(s[i] == '1'){
            mp[1]++;
        }
        else if(s[i] == '2'){
            mp[2]++;
        }
        else if(s[i] == '3'){
            mp[3]++;
        }
        else {
            sum1 += s[i] - '0';
        }
    }

  
    if(sum % 9 == 0){
        cout << "YES" << endl;
        return;
    }

    
    int cnt = sum1 % 9;
    
  
    mp[1] = (mp[1] + cnt) % 9;

   
    mp[1] -= min(mp[2] / 2, mp[1]);
    mp[2] -= min(mp[2] / 2, mp[1]);
       
    
    if(mp[1]==0 && mp[2] == 0){
        cout << "YES" << endl;
        return;
    }
    if(mp[1]==7 && mp[2]==1){
        cout<<"YES"<<endl;
        return;

    }
    if( mp[1]==5 && mp[2] ==1){
        cout<<"YES"<<endl;
        return;
        
    }

    
    if (mp[1] == 0) {
        if (mp[3] != 0 && 
            ((mp[2] % 2 == 0 && mp[3] >= mp[2] / 2) || (mp[2] % 3 == 0 && mp[3] >= mp[2] / 3))) {
            cout << "YES" << endl;
            return;
        }
    } else {
        if (mp[2] == 1) {
            if ((mp[1] == 7 || mp[1] == 8) && mp[3] >= 2) {
                cout << "YES" << endl;
                return;
            } else if ((mp[1] == 4 || mp[1] == 2) && mp[3] >= 1) {
                cout << "YES" << endl;
                return;
            }
        } else {
            if ((mp[1] == 6 || mp[1] == 3) && mp[3] >= 1) {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
    

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
