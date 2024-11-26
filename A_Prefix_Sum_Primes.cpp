#include<bits/stdc++.h>
using namespace std;
void solve(){
int n;
cin>>n;
vector<char>s(n);
for(int i=0;i<n;i++)cin>>s[i];

int ones=0,two=0;
for(int i=0;i<n;i++){
    if(s[i]=='1') ones++;
    else two++;
}
 if(ones == 0 || two == 0){
    for(int i=0;i<n;i++)cout<<s[i]<<" ";
    cout<<endl;
 }
 else {
    cout << "2 1 ";
        for (int i = 0; i < two - 1; i++) cout << "2 ";
        for (int i = 0; i < ones - 1; i++) cout << "1 ";
        cout << endl;

 }
}
int main(){
     solve();
}