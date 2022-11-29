#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> graph[N];
bool vis[N];
void bfs(int vertex)
{

    queue<int> q;
    vis[vertex] = true;
    q.push(vertex);

    while (q.size())
    {
        int par = q.front();
        q.pop();
        cout << par << endl;
        for (auto child : graph[par])
        {
            if (!vis[child])
            {

                vis[child] = true;
                q.push(child);
            }
        }
    }
}

void bfs2(int vertex)
{

    queue<int> q;
    q.push(vertex);
    while (q.size())
    {
        int par = q.front();
        q.pop();
        if (vis[par])
            continue;
        vis[par] = 1;
        cout << par << endl;
        for (auto child : graph[par])
            q.push(child);
    }
}

void dfs(int vertex)
{
    if (vis[vertex] == true)
        return;
    vis[vertex] = true;
    cout << vertex << endl;
    for (auto child : graph[vertex])
        dfs(child);
}
int main()
{
    int vertex, edge;
    cin >> vertex >> edge;
    for (int i = 1; i <= edge; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    int connected_comp = 0;
    // for (int i = 1; i <= vertex; i++)
    // {
    //     if (vis[i])
    //         continue;
    //     dfs(i);
    //     connected_comp++;
    // }
    // cout << connected_comp << endl;
    bfs(1);

    return 0;
}