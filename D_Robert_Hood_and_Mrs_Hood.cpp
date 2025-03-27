#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, d, k;
  cin >> n >> d >> k;
  vector<int> a(n + 1, 0);
  vector<int> b(n + 1, 0);
  for (int i = 0; i < k; i++)
  {
    int x, y;
    cin >> x >> y;
    a[x]++;
    b[y]++;
  }
  {}
  for (int i = 0; i < n; i++)
    a[i + 1] += a[i];
  for (int i = 0; i < n; i++)
    b[i + 1] += b[i];
  int r = 0, m = 0;
  int maxi = 0, mini = LONG_MAX;
  for (int i = d; i <= n; i++)
  {
    int cur = a[i] - b[i - d];
    if (cur > maxi)
    {
      r = i - d + 1;
      maxi = cur;
    }
    if (cur < mini)
    {
      m = i - d + 1;
      mini = cur;
    }
  }
  cout << r << " " << m << endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}