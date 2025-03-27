#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    string s;
    char deb=s[0];
    string ans="";
    for(int i=0;i<n;i++){
      ans+=deb;
      int j=i+1;
      while(j< n && s[j]!=deb){
           j++;
      }
      i=j;
      deb=s[j+1];
      }
      cout<<ans<<endl;  
}
{
    key:dhhdg
    img
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}