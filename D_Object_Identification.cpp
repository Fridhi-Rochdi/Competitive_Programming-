#include <iostream>
#include <vector>
using namespace std;

void solve(){
    long long inputNumber;
    cin >> inputNumber;

    // Vérification si un chiffre '7' est présent dans le nombre
    bool hasDigitSeven = false;
    long long temp = inputNumber;
    while (temp) {
        if (temp % 10 == 7) {
            hasDigitSeven = true;
            break;
        }
        temp /= 10;
    }

    // Si le chiffre 7 est déjà présent
    if (hasDigitSeven) {
        cout << 0 << "\n";
        return;
    }

    int minOperations = -1;
    // Recherche du nombre d'opérations minimum pour obtenir un chiffre 7
    for (int operations = 1; operations <= 30 && minOperations == -1; operations++) {
        long long reducedNumber = inputNumber - operations;
        vector<int> digits;
        while (reducedNumber) {
            digits.push_back(reducedNumber % 10);
            reducedNumber /= 10;
        }
        if (digits.empty()) digits.push_back(0);

        const int maxCarryOver = 40;
        vector<vector<int>> dp(operations + 1, vector<int>(maxCarryOver, 0));
        dp[operations][0] = 1;

        for (int position = 0, totalDigits = max((int)digits.size(), 12); position < totalDigits; position++) {
            vector<vector<int>> nextDp(operations + 1, vector<int>(maxCarryOver, 0));
            int currentDigit = position < digits.size() ? digits[position] : 0;
            for (int remainingOps = 0; remainingOps <= operations; remainingOps++) {
                for (int carryOver = 0; carryOver < maxCarryOver; carryOver++) {
                    if (dp[remainingOps][carryOver]) {
                        for (int addedValue = 0; addedValue <= remainingOps; addedValue++) {
                            int totalSum = currentDigit + carryOver + addedValue;
                            int newDigit = totalSum % 10;
                            int newCarryOver = totalSum / 10;
                            if (newCarryOver < maxCarryOver) {
                                nextDp[remainingOps - addedValue][newCarryOver] |= dp[remainingOps][carryOver] | (newDigit == 7 ? 2 : 0);
                            }
                        }
                    }
                }
            }
            dp = move(nextDp);
        }

        if (dp[0][0] & 2) {
            minOperations = operations;
            break;
        }
    }

    cout << minOperations << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        solve();
    }
    
    return 0;
}
