#include<bits/stdc++.h> 
using namespace std; 
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define f first
#define s second
#define all(a) (a).begin(),(a).end()

void dfs(int curr, vector<vector<int>>& edges, int parent, vector<int>& parents){
    parents[curr] = parent;

    for(int neighbour : edges[curr])
        if(neighbour != parent)
            dfs(neighbour, edges, curr, parents);
}
void solve() {
    int n;
    cin >> n;
    vector<vector<int>> edges(n, vector<int>());
    for(int i = 0; i < n - 1; i++){
        int u, v;
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }    
    vector<int> parents(n, -1);
    dfs(0, edges, -1, parents);
}

int main()
{ 
    int t; 
    cin>>t; 
    while(t--)
    { 
        solve(); 
    } 
} 
