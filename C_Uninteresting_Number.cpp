#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    long long sum = 0;
    long long sum1 = 0;
    int cnt2=0,cnt3=0;

    for(int i = 0; i < s.length(); i++){
        sum += s[i] - '0';
        
      
      
       if(s[i] == '2'){
            cnt2++;
        }
        else if(s[i] == '3'){
            cnt3++;
        }
      
    }
   
    for(int i=0;i<=cnt2;i++){
         for(int j=0;j<=cnt3;j++ ){
             if((sum+i*2+j*6)%9==0){
                cout<<"YES"<<endl;
                return;
             }
         }
    }
    cout<<"NO"<<endl;
    

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
