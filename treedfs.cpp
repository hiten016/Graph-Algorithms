//dfs in a tree depth and height of a tree 
void dfs(int vertex, int par=0){ 
    for(int child: g[vertex])
    { 
        if(child==par)continue; 
        depth[child]=depth[vertex]+1; 
        dfs(child,vertex); 
        height[vertex]=max(height[vertex],height[child]);
    }
}

//subtree sum and even count 
int subtree_sum[N]; 
vector<int>g[N]; 
void dfs(int vertex, int par=0)
{
  if(vertex%2==0)
    subtree_sum++; 
  for(int child: g[vertex])
  { 
    if(child==parent) continue; 
    dfs(child,vertex); 
  }

subtree_sum[vertex]+=subtree_sum[child]; 
even_cnt[vertex]+=even_cnt[child]; 
}

int main()
 {  

    // inserting into the tree
    int n; 
    cin>>n; 
    for(int i=0; i<n-1; ++i)
    { 
        int x,y; 
        cin>>x,y; 
        g[x].push_back(y); 
        g[y].push_back(x); 

    }
    int t; 
    while(t--)
    { 
        int v; 
        cin>>v; 
        cout<<subtree_sum[v]<<" "<<even_cnt[v]; 

    }
 }
//diameter of a tree
//with any node as root find maximum depth 

vector<int>g[N]; 
int depth[N]; 

void dfs(int v, int par=-1)
{ 
    for(int child:g[v])
    { 
        if(child==par)continue; 
        depth[child]=depth[v]+1; 
        dfs(child,v); 

    }
}

int main()
 {  

    // inserting into the tree
    int n; 
    cin>>n; 
    for(int i=0; i<n-1; ++i)
    { 
        int x,y; 
        cin>>x,y; 
        g[x].push_back(y); 
        g[y].push_back(x); 

    }
    int maxi=-1; 
    int maxinode; 
    for(int i=1; i<=n; i++)
    { 
        if(maxi<depth[i])
         { 
            maxi=depth[i]; 
            maxinode=i;
         }
         depth[i]=0; 
    }
    dfs(maxi); 
    maxi=-1; 
    for(int i=1; i<=n; i++)
    { 
        if(maxi<depth[i])
        { 
            maxi=depth[i]; 

        }
    }
    cout<<maxi<<endl; 
 }
//concept of Binary lifting O(logN) approach to find the lca
