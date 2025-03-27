#include <iostream>
#include <vector>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    long long ans1 = n;
    while (ans1) {
        if (ans1 % 10 == 7) {
            cout << 0 << "\n"; 
            return;
        }
        ans1 /= 10;
    }

    int res1 = -1; 
    const int cnt1 = 100;

   
    static vector<vector<int>> res2(51, vector<int>(cnt1, 0));
    static vector<vector<int>> vec2(51, vector<int>(cnt1, 0)); 


    for (int ans2 = 1; ans2 <= 50; ans2++) {
        long long cnt2 = n - ans2;
        vector<int> vec1;

    
        while (cnt2) {
            vec1.push_back(cnt2 % 10);
            cnt2 /= 10;
        }

       
        if (vec1.empty()) vec1.push_back(0);

     
        for (int i = 0; i <= ans2; i++) {
            for (int j = 0; j < cnt1; j++) {
                res2[i][j] = 0;
            }
        }
        res2[ans2][0] = 1;

        
        for (int k = 0, totalDigits = max((int)vec1.size(), 12); k < totalDigits; k++) {
            
            for (int i = 0; i <= ans2; i++) {
                for (int j = 0; j < cnt1; j++) {
                    vec2[i][j] = 0;
                }
            }
            int cnt = k < vec1.size() ? vec1[k] : 0;

           
            for (int i = 0; i <= ans2; i++) {
                for (int j = 0; j < cnt1; j++) {
                    if (res2[i][j]) {
                        for (int k = 0; k <= i; k++) {
                            int a = cnt + j + k;
                            int b = a % 10; 
                            int c = a / 10; 

                          
                            if (c < cnt1) {
                                vec2[i - k][c] |= res2[i][j] | (b == 7 ? 2 : 0);
                            }
                        }
                    }
                }
            }
           
            for (int i = 0; i <= ans2; i++) {
                for (int j = 0; j < cnt1; j++) {
                    res2[i][j] = vec2[i][j];
                }
            }
        }

      
        if (res2[0][0] & 2) {
            res1 = ans2;
            break;
        }
    }

    // Si aucune solution n'est trouvée, afficher -1, sinon afficher le résultat
    cout << res1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>> t;

    while (t--) {
        solve();
    }

    return 0;
}
