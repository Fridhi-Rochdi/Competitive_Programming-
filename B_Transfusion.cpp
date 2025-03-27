#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>vec(n);
    long long sum1=0,sum2=0;
    int cnt1=0,cnt2=0;
    
    for(int i=0;i<n;i++){
        cin>>vec[i];
        if(i%2==0){ sum1+=vec[i];cnt1++;}
        if(i%2!=0)  {sum2+=vec[i];cnt2++;}
    }
    if((sum1/cnt1)==(sum2/cnt2)){
         bool ok= (sum1/cnt1)*cnt1==sum1,ok1=(sum2/cnt2)*cnt2==sum2;

        if(  ok&& ok1 )cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"NO"<<endl;

}

    
int main() {
    int t;
    cin >> t;
    while (t--) {
       solve();
    }
    return 0;
}
