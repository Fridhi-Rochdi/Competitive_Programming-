#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<char>> vec(n, vector<char>(4));
    vector<int>vec1;
    for(int i=0;i<n;i++){
       for(int j=0;j<4;j++){
            cin>>vec[i][j];
            if(vec[i][j]=='#'){
                vec1.push_back(j+1);
            }
       }
    }
  
    for (int i = n-1; i>=0; i--)
    {
       cout <<vec1[i]<<" ";

    }
    cout<<endl;
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
