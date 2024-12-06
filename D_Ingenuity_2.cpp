#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1)
    {
        cout << "NO" << endl;
        return;
    }
    map<char, int> mp;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'S')
            mp['S']++;
        if (s[i] == 'E')
            mp['E']++;
        if (s[i] == 'W')
            mp['W']++;
        if (s[i] == 'N')
            mp['N']++;
    }
    if (abs(mp['S'] - mp['N']) % 2 != 0 || abs(mp['E'] - mp['W']) % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    
       
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        ans += 'H';
    }

    if (mp['S'] == mp['N'] && mp['E'] == mp['W'])
    {     
        if ( n == 2)
    {
        cout << "NO" << endl;
        return;
    }
        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'E' && s[0] == 'W')
            {
                ans[i] = 'R';
                break;
            }
            if (s[i] == 'W' && s[0] == 'E')
            {
                ans[i] = 'R';
                break;
            }
            if (s[i] == 'N' && s[0] == 'S')
            {
                ans[i] = 'R';
                break;
            }
            if (s[i] == 'S' && s[0] == 'N')
            {
                ans[i] ='R';
                break;
            }
        }
        ans[0] = 'R';
        cout << ans << endl;
        return;
    }
   
    if (mp['S'] > mp['N']) {
        int cnt = (mp['S'] - mp['N']) / 2;
        for (int i = 0; i < n && cnt > 0; i++) {
            if (s[i] == 'S') {
                ans[i] = 'R';
                cnt--;
            }
        }
    } else if (mp['N'] > mp['S']) {
        int cnt = (mp['N'] - mp['S']) / 2;
        for (int i = 0; i < n && cnt > 0; i++) {
            if (s[i] == 'N') {
                ans[i] = 'R';
                cnt--;
            }
        }
    }

    if (mp['E'] > mp['W']) {
        int cnt = (mp['E'] - mp['W']) / 2;
        for (int i = 0; i < n && cnt > 0; i++) {
            if (s[i] == 'E') {
                ans[i] = 'R';
                cnt--;
            }
        }
    } else if (mp['W'] > mp['E']) {
        int cnt = (mp['W'] - mp['E']) / 2;
        for (int i = 0; i < n && cnt > 0; i++) {
            if (s[i] == 'W') {
                ans[i] = 'R';
                cnt--;
            }
        }
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
