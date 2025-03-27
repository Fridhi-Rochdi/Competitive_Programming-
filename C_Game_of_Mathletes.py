
#include <bits/stdc++.h>
using namespace std;

#define MAX_N 2000

void solve(int a, int b, vector<vector<int>>& c) {
    vector<int> d(a), e(a);

    for (int f = 0; f < a; f++) {
        sort(c[f].begin(), c[f].end());
        d[f] = c[f][0];               
        e[f] = f + 1;                  
    }

  
    for (int f = 0; f < a; f++) {
        for (int g = f + 1; g < a; g++) {
            if (d[f] > d[g]) {
              
                swap(d[f], d[g]);
              
                swap(e[f], e[g]);
            }
        }
    }

    
    int h = -1; 
    bool valid = true;

    for (int i = 0; i < b && valid; i++) {
        for (int f = 0; f < a && valid; f++) {
            int cow = e[f] - 1;
            bool played = false;

            for (int j = 0; j < b; j++) {
                if (c[cow][j] > h) {
                    h = c[cow][j];  
                    c[cow][j] = -1; 
                    played = true;
                    break;
                }
            }

            if (!played) valid = false; 
        }
    }

 
    if (valid) {
        for (int f = 0; f < a; f++) {
            cout << e[f] << " ";
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        vector<vector<int>> c(a, vector<int>(b)); 

     
        for (int f = 0; f < a; f++) {
            for (int g = 0; g < b; g++) {
                cin >> c[f][g];
            }
        }

        solve(a, b, c);
    }

    return 0;
}
