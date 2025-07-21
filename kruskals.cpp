#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, weight;
};

bool compare(Edge a, Edge b) {
    return a.weight < b.weight;
}

int findParent(int node,vector<int>& parent) {
    if (parent[node] == node)
        return node;
    return parent[node] = findParent(parent[node], parent);
}

void unionSet(int u, int v, vector<int>& parent, vector<int>& rank) {
    int pu = findParent(u, parent);
    int pv = findParent(v, parent);
    if (rank[pu] < rank[pv])
        parent[pu] = pv;
    else if (rank[pu] > rank[pv])
        parent[pv] = pu;
    else {
        parent[pv] = pu;
        rank[pu]++;
    }
}

void kruskal(int n, vector<Edge>& edges) {
    sort(edges.begin(), edges.end(), compare);
    vector<int> parent(n), rank(n, 0);
    for (int i = 0; i < n; i++)
        parent[i] = i;

    for (Edge e : edges) {
        if (findParent(e.u, parent) != findParent(e.v, parent)) {
            cout << e.u << " - " << e.v << " : " << e.weight << endl;
            unionSet(e.u, e.v, parent, rank);
        }
    }
}

int main() {
    int n = 5;
    vector<Edge> edges = {
        {0, 1, 10}, {0, 2, 6}, {0, 3, 5},
        {1, 3, 15}, {2, 3, 4}
    };

    kruskal(n, edges);
    return 0;
}
