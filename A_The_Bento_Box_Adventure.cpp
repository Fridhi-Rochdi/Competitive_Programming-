#include <iostream>
#include <unordered_set>

int main() {
    // Read the four restaurant numbers
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    // Create a set to store the visited restaurants
    std::unordered_set<int> visited = {a, b, c, d};

    // Iterate through all possible restaurant numbers (1 to 5)
    for (int i = 1; i <= 5; ++i) {
        // If the restaurant number is not in the set, it's the one to visit on Friday
        if (visited.find(i) == visited.end()) {
            std::cout << i << std::endl;
            break;
        }
    }

    return 0;
}