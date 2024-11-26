#include <bits/stdc++.h>
using namespace std;
bool estCarreParfait(int nombre) {
    if (nombre < 0) {
        return false;
    }
    int racine = static_cast<int>(sqrt(nombre)); 
    return racine * racine == nombre; 
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(!estCarreParfait(n)){
        cout<<"NO"<<endl;
        return;
    }
    string ans="";
    int racine=static_cast<int>(sqrt(n)); 
    for(int i=0;i<racine;i++){
        for(int j=0;j<racine;j++){
            if(i==0|| i==racine-1) ans+="1";
            else if(j==0 || j==racine-1)ans+="1";
            else ans+="0";

        }
    }
    if(ans!=s){
     cout<<"NO"<<endl;
        return;   
    }
    cout<<"YES"<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
