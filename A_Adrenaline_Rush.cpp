#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

// Fonction principale
void solve() {
    long long n;
    cin >> n;

    vector<int> desired_order(n);
    for (auto& value : desired_order) {
        cin >> value;
        --value; 
    }

    vector<int> current_order(n);
    for (int i = 0; i < n; ++i) {
        current_order[i] = i;
    }

    vector<pair<int, int>> operations;

    
    auto perform_swap = [&](int index) -> void {
        operations.emplace_back(current_order[index], current_order[index + 1]);
        swap(current_order[index], current_order[index + 1]);
    };

    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            if (current_order[j] < current_order[j + 1]) {
                perform_swap(j);
            }
        }
    }

   
    vector<int> position_in_desired_order(n);
    for (int i = 0; i < n; ++i) {
        position_in_desired_order[desired_order[i]] = i;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            if (position_in_desired_order[current_order[j]] > position_in_desired_order[current_order[j + 1]]) {
                perform_swap(j);
            }
        }
    }

    
    cout << operations.size() << endl;
    for (const auto& [first_value, second_value] : operations) {
        cout << first_value + 1 << " " << second_value + 1 << endl; 
    }
}


int main() {
    solve();
    return 0;
}
