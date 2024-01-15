#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 3;

int m;
bitset<MAXN> hasCat;
vector<vector<int> > adjList;
int ans, maxx[MAXN] = {0}, curr[MAXN] = {0};

void dfs(int u, int par = 0)
{
    if(hasCat[u])
        curr[u] = 1 + ((hasCat[par])? curr[par] : 0);
    else
        curr[u] = 0;

    maxx[u] = max(curr[u], maxx[par]);

    bool isLeaf = true;

    for(auto &v : adjList[u]) {
        if(v != par) {
            dfs(v, u);
            isLeaf = false;
        }
    }

    if(isLeaf and maxx[u] <= m) ++ans;
}

int main()
{
    int n;
    cin >> n >> m;

    int tmp;

    for(int i = 1; i <= n; ++i) {
        cin >> tmp;
        hasCat[i] = tmp;
    }

    adjList.resize(n+3);
    int u, v;

    for(int i = 1; i < n; ++i) {
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    ans = 0;
    dfs(1);

    cout << ans << "\n";

    return 0;
}