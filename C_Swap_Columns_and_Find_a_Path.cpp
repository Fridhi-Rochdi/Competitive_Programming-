#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int a[2][n];
    for (int i = 0; i < 2; i++) {
       
        for(int j=0;j<n;j++ )cin>>a[i][j];
    }
    long long  sum=-1e18+7;
    for(int i=0;i<n;i++){
        long long sum1=a[1][i]+a[0][i];
        for(int j=0;j<n;j++){
            if(i!=j)
            {sum1+=max(a[1][j],a[0][j]);}
        }
        sum=max(sum,sum1);
    }
    cout<<sum<<endl;

}

int main() {
    int t;
    cin >> t;  // Read the number of test cases
    while (t--) {
        solve();  // Call solve function for each test case
    }
    
    return 0;
}
