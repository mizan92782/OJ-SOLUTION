#include <iostream>
#include <vector>

using namespace std;

void dfs(int employee, const vector<vector<int>>& adj_list, vector<bool>& visited, int& group_count) {
    visited[employee] = true;
    for (int subordinate : adj_list[employee]) {
        if (!visited[subordinate]) {
            dfs(subordinate, adj_list, visited, group_count);
        }
    }
}

int minimumGroups(int n, const vector<int>& managers) {
    vector<vector<int>> adj_list(n + 1);
    for (int i = 1; i <= n; ++i) {
        if (managers[i - 1] != -1) {
            adj_list[managers[i - 1]].push_back(i);
        }
    }

    vector<bool> visited(n + 1, false);
    int group_count = 0;

    for (int employee = 1; employee <= n; ++employee) {
        if (!visited[employee]) {
            group_count++;
            dfs(employee, adj_list, visited, group_count);
        }
    }

    return group_count;
}

int main() {
    int n;
    cin >> n;

    vector<int> managers(n);
    for (int i = 0; i < n; ++i) {
        cin >> managers[i];
    }

    int result = minimumGroups(n, managers);
    cout << result << endl;

    return 0;
}
