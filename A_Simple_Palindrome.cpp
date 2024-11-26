#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string vo = "aeiou";
    string ans = "";

   
    for (int i = 0; i < n; i++)
    {
      ans += vo[i % 5];  
    }
        sort(ans.begin(),ans.end());
    cout << ans << endl;
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
