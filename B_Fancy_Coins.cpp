#include<bits/stdc++.h>
using namespace std;
void solve(){
    int m,k,a1,ak;
    cin>>m>>k>>a1>>ak;
    int kdeh_lazemnimnk=m/k;
    int  kdehlazemnimn1=m%k; 
    int nagedeh3andimk=max(0,ak-kdeh_lazemnimnk);
    int nagedeh3andim1=max(0,a1-kdehlazemnimn1);
    int gedehnzidmnk=max(0,kdeh_lazemnimnk-ak);
    int gedehfdhalimil1=min(gedehnzidmnk,nagedeh3andim1/k);
    int gedehnzidmn1=max(0,kdehlazemnimn1-a1);
    cout<<gedehnzidmnk+gedehnzidmn1-gedehfdhalimil1<<endl;
    

}
int main(){
int t;
cin>>t;
while (t--)
{
    solve();
}

}