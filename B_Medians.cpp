#include <iostream>
#include <vector>
using namespace std;


bool mediane(int debut, int fin, int k) {
    int midIndex = (debut + fin) / 2;
    return (midIndex == k);
}

void solve() {
int n,k;
cin>>n>>k;
if(n==1){
  cout<<1<<endl;
  cout<<1<<endl;
  return;

}
if(k==n || (k==1 && n!=1)){
  cout<<-1<<endl;
  return;
}

else{

  cout<<3<<endl;
  if((n-k)%2==0){
    cout<<1<<" "<<k-1<<" "<<k+2<<endl;
  }
  else {

  cout<<1<<" "<<k<<" "<<k+1<<endl;
  }}
}



int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
}
