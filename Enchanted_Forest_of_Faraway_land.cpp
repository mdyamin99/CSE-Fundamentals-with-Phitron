#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> adj;       
vector<vector<long long>> values;  
vector<int> parent, depth, path;     

void edge(int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(int node, int par, int dep) {
    parent[node] = par;
    depth[node] = dep;
    for (int neighbor : adj[node]) {
        if (neighbor != par) {
            dfs(neighbor, node, dep + 1);
        }
    }
}

vector<int> findPath(int u, int v) {
    path.clear();
    while (u != v) {
        if (depth[u] > depth[v]) {
            path.push_back(u);
            u = parent[u];
        } else {
            path.push_back(v);
            v = parent[v];
        }
    }
    path.push_back(u);
    return path;
}

void insert(int u, long long x) {
    values[u].push_back(x);
}
void remove(int u, long long x) {
    auto it = find(values[u].begin(), values[u].end(), x);
    if (it != values[u].end()) {
        values[u].erase(it);
    }
}

long long findKth(int u, int v, int k) {
    vector<long long> allValues;
    vector<int> path = findPath(u, v);

    for (int node : path) {
        allValues.insert(allValues.end(), values[node].begin(), values[node].end());
    }

    if (k > allValues.size()) {
        return -1;
    }

    nth_element(allValues.begin(), allValues.begin() + k - 1, allValues.end());
    return allValues[k - 1];
}

int main() {
    int m;
    cin >> n >> m;

    adj.resize(n + 1);
    values.resize(n + 1);
    parent.resize(n + 1, -1);
    depth.resize(n + 1, 0);
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        edge(u, v);
    }

    dfs(1, -1, 0);

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        string query;
        cin >> query;

        if (query == "insert") {
            int u;
            long long x;
            cin >> u >> x;
            insert(u, x);
        } else if (query == "delete") {
            int u;
            long long x;
            cin >> u >> x;
            remove(u, x);
        } else if (query == "find") {
            int u, v, k;
            cin >> u >> v >> k;
            cout << findKth(u, v, k) << "\n";
        }
    }
    return 0;
}