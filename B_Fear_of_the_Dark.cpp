#include <bits/stdc++.h>
using namespace std;

void solve() {
    double xp, yp, xa, ya, xb, yb;
    cin >> xp >> yp >> xa >> ya >> xb >> yb;
    double rayon = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb)) / 2;
    double distancepb = sqrt((xp - xb) * (xp - xb) + (yp - yb) * (yp - yb));
    double distanceob = sqrt(xb * xb + yb * yb);
    double distanceao = sqrt(xa * xa + ya * ya);
    double distanceap = sqrt((xa - xp) * (xa - xp) + (ya - yp) * (ya - yp));
  
    double ans = min({max(distanceob, distancepb), max(distanceao, distanceap), max(rayon, max(distanceao, distancepb)), max(rayon, max(distanceap, distanceob))});
      cout << fixed << setprecision(10) << ans<< endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
