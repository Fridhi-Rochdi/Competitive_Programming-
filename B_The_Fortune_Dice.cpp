#include <iostream>
using namespace std;

string yes(int x) {

    if (x < 2 || x > 12) {
        return "No";
    }
    for (int a = 1; a <= 6; ++a) {
        for (int b = 1; b <= 6; ++b) {
            if (a + b == x) {
                return "Yes";
            }
        }
    }
    return "No";
}

int main() {
    int x;
  
    cin >> x;
    cout << yes(x) << endl;
    return 0;
}
