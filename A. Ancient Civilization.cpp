#include <bits/stdc++.h>
using namespace std;

string decimalToBinary(int n, int l) {
    string binary = "";
    if (n == 0) {
        binary = "0";
    } else {
        while (n > 0) {
            binary = to_string(n % 2) + binary;
            n = n / 2;
        }
    }
    while (binary.length() < l) {
        binary = "0" + binary;
    }
    if (binary.length() > l) {
        binary = binary.substr(binary.length() - l);
    }
    return binary;
}

int binaryToDecimal(string l) {
    int decimalValue = 0;
    int length = l.length();
    for (int i = 0; i < length; i++) {
        if (l[i] == '1') {
            decimalValue += pow(2, length - 1 - i);
        }
    }
    return decimalValue;
}

void solve() {
    int n, l;
    cin >> n >> l;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s[i] = decimalToBinary(x, l);
    }

    string a = "";
    for (int i = 0; i < l; i++) {
        int count0 = 0, count1 = 0;
        for (int j = 0; j < n; j++) {
            if (s[j][i] == '0') count0++;
            else count1++;
        }
        if (count0 >= count1) a += '0';
        else a += '1';
    }

    cout << binaryToDecimal(a) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
