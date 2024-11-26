#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    long long  maxi = 1;
    long long temp=1;
     for(int i=0;i<s.length();i++){
      temp*=(s[i] - '0');
     }
     maxi=max(maxi,temp);
     bool ok=true;
     long long temp2=1;
     if(s[0]=='1') {
        for(int i=0;i<s.length()-1;i++)temp2*=9;
     }
     maxi=max(maxi,temp2);
    
    for (int i = 0; i < s.length(); i++)
    {
        long long  ans = 1;
        for (int j = 0; j < s.length(); j++)
        {
            if (j < i )
                ans *= (s[j] - '0');
            else if (i == j)
                ans *= (s[j] - '0' - 1);
            else
                ans *= 9;
        }
        maxi = max(ans, maxi);
    }
    cout << maxi << endl;
}
int main()
{
    solve();
}
