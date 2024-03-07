#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100];
vector<int> path;
int parent[100], dis[100], visited[100];
void shortest_path(int d)
{
    if (d != -1)
    {
        int p = parent[d];
        path.push_back(d);
        shortest_path(p);
    }
}

void Bfs(int source)
{
    queue<int> q;
    dis[source] = 0;
    visited[source] = 1;
    parent[source] = -1;
    q.push(source);
    while (!q.empty())
    {
        int node = q.front();
        for (auto it : adj[node])
        {
            int nxt_node = it;

            if (visited[nxt_node])
                continue;
            dis[nxt_node] = 1 + dis[node];
            visited[nxt_node] = 1;
            parent[nxt_node] = node;
            q.push(nxt_node);
        }
        q.pop();
    }
}
int main()
{
    int i, j, k;
    int n, e;
    cout<<"For Graph b: "<<endl;
    cout << "No.of Nodes: " << endl;
    cin >> n;
    cout << "No.of Edges: " << endl;
    cin >> e;
    cout << "Enter the edge connections: " << endl;
    for (i = 0; i < e; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int source, dest;
    cout << "Enter the Source Node: " << endl;
    cin >> source;
    cout << "Enter the Destination Node:" << endl;
    cin >> dest;
    Bfs(source);
    cout << "Shortest Distance from " << source << " to " << dest << " = " << dis[dest] << endl;
    cout << "Shortest Path is: ";
    shortest_path(dest);

    reverse(path.begin(), path.end());

    for (auto it : path)
    {
        cout << it << " ";
    }
}
