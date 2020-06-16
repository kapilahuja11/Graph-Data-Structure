void dfsre(vector<int> g[],int s,bool visited[],vector<int>& v,int N)
{
    visited[s]=true;
    v.push_back(s);
    for(int u: g[s])
     if(visited[u]==false)
       dfsre(g,u,visited,v,N);
    
}


vector <int> dfs(vector<int> g[], int N)
{
    
    // Your code here
    bool visited[N];
    vector<int> v;
    for(int i=0;i<N;i++)
     visited[i]=false;
    for(int i=0;i<N;i++)
    {
        if(visited[i]==false)
        {
            dfsre(g,i,visited,v,N);
        }
    }
    
   return v;
}
