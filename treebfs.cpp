//bfs traveral in a tree
//methods- (n+1) size -> adjacency list 
//n size adjancency list-> store in zero base indexing  

vector<vector<int>adj(n); 
for(int i=0; i<n-1; i++)
{ 
    int u,v; 
    cin>>u>>v; 
    u--, v--; 
    adj[u].push_back(v); 
    adj[v].push_back(u); 

}

int root=0; 
vector<int>bfs; 
queue<int qu;
//check if the particular node is visited or not  
vector<bool>visited(n,false); 

qu.push(root); 
visited[root]=true; 
while(!(u.empty()))
{ 
    int currnode=qu.front(); 
    qu.pop(); 

    bfs.push_back(currnode)
    for(int neigh: adj[currnode])
     { 
        if(!visited[neigh])
        { 
            visited[neigh]=true; 
            qu.push(neigh);
        }
     }
}
