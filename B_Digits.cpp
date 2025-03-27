#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, d;
        cin >> n >> d;
        set<int>st;
        st.insert(1);
        if(n>=3 || d%3==0){
            st.insert(3);

        }
        if(d%5==0){
            st.insert(5);
        }
        if(n>=6){
            st.insert(9);
        }
        else {
            long long fact=1,cnt=2;
            while(cnt<=n){
                fact*=cnt;cnt++;
            }
            if(fact*d %9==0){
                st.insert(9);
            }
        }
        if(n>=3){
           st.insert(7); 
        }
        if(d%7==0){
           st.insert(7);  
        }
         
        for(auto x:st){
            cout<<x<<" ";
        }
        cout<<endl;

        
        
        
    }

    return 0;
}
