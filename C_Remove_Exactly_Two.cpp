#include <bits/stdc++.h>
using namespace std;

bool binarySearch(const vector<int>& graph, int key) {
    int left = 0, right = graph.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (graph[mid] == key) 
            return true;
        else if (graph[mid] < key) 
            left = mid + 1;
        else 
            right = mid - 1;
    }
    return false;
}

bool compare(const int x, const int y, const vector<int>& degree) {
    if (degree[x] != degree[y]) 
        return degree[x] > degree[y];
    return x < y;
}

void solve() {
    int numNodes;
    cin >> numNodes;

    vector<vector<int>> adjacencyList(numNodes + 1, vector<int>());
    vector<int> degree(numNodes + 1, 0);

    for (int i = 0; i < numNodes - 1; ++i) {
        int a, b;
        cin >> a >> b;
        adjacencyList[a].push_back(b);
        adjacencyList[b].push_back(a);
        degree[a]++;
        degree[b]++;
    }

    vector<int> sortedNodes(numNodes);
    for (int i = 0; i < numNodes; ++i) {
        sortedNodes[i] = i + 1;
    }

    sort(sortedNodes.begin(), sortedNodes.end(), [&](const int x, const int y) {
        return compare(x, y, degree);
    });

    for (int node = 1; node <= numNodes; ++node) {
        sort(adjacencyList[node].begin(), adjacencyList[node].end());
    }

    long long maxValue = 0;

    for (int i = 0; i < numNodes; ++i) {
        int firstNode = sortedNodes[i];
        for (int j = i + 1; j < numNodes; ++j) {
            int secondNode = sortedNodes[j];

            if (!binarySearch(adjacencyList[firstNode], secondNode)) { 
                long long temp = static_cast<long long>(degree[firstNode]) + degree[secondNode] - 1;
                maxValue = max(maxValue, temp);
                break;
            }
        }
    }

    long long maxResult = 0;

    for (int node = 1; node <= numNodes; ++node) {
        for (auto &neighbor : adjacencyList[node]) {
            if (node < neighbor) {
                long long temp = static_cast<long long>(degree[node]) + degree[neighbor] - 2;
                maxResult = max(maxResult, temp);
            }
        }
    }

    cout << max(maxValue, maxResult) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        solve();
    }

    return 0;
}
