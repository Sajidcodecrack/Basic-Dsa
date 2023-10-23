#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> adj[5];
bool visit[5];
void edge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void bfs(int node)
{
    queue<int> q;
    q.push(node);
    visit[node] = true;
    while (!q.empty())
    {
        int u = q.front();
        cout << u << " ";
        q.pop();
        for (int i = 0; i < adj[u].size(); i++)
        {
            if (!visit[adj[u][i]])
            {
                q.push(adj[u][i]);
                visit[adj[u][i]] = true;
            }
        }
    }
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        visit[i] = false;
    }
    edge(0, 2);
    edge(0, 1);
    edge(1, 3);
    edge(2, 3);
    edge(2, 4);
    bfs(0);

    return 0;
}