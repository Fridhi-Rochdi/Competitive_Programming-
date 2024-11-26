#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int X, Y, K;
        cin >> X >> Y >> K;
        cout << "0 0 " << min(Y, X)<<" " <<min(Y, X)<< endl;;
        cout << "0 " << min(Y, X) <<" "<<min(Y, X)<<" "<<"0"<< endl;;
    }

    return 0;
}
