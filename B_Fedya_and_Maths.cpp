#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin>>s;
    if(s=="0"){
        cout<<4<<endl;return;
    }
    int ans=1;
    long long a=0;
    for(int i=0;i<s.length();i++){
           a+=(s[i]-'0');
    }
    bool ok4=true;
    if(s.length()==1)   ok4&=((s[0]-'0')%4==0);
    else {
        int e5erzouzar9am = (s[s.length() - 2] - '0') * 10 + (s[s.length() - 1] - '0');
        ok4 &= (e5erzouzar9am % 4 == 0);
    }
    if(ok4){
        ans+=1;//mta3  2
        ans+=1;// mta3  4
        ans+=1;// mta3 3
        cout<<ans%5<<endl;
        return;
    }
    else{  
        if(s[s.length()-1]%2==0) {
              ans+=4;//mta3 2
              ans+=4;// mta3 3
              ans+=1;// mta3 4
              cout<<ans%5<<endl;
        return;
        }
        else  if(a%3==0){
            ans+=3;// mta3 2 
            ans+=4;//  mta3 4
            ans+=2;//mta3  3
            cout<<ans%5<<endl;
             return;
        }
        else {
            ans+=2;//mta3 2
            ans+=4;//mta3 4
            ans+=3;//mta33 3
            cout<<ans%5<<endl;
             return;
        }
    }
}
int main() {
        solve();
    return 0;
}
