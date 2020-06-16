bool DFSREC(vector<int> adj[],int s,bool visited[], bool recst[])
{
    visited[s]=true;
    recst[s]=true;
    for(int u : adj[s])
    {
        if(visited[u]==false && DFSREC(adj,u,visited,recst))
          return true;
        else if(recst[u]==true)
         return true;
    }
    recst[s]=false;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    // Your code here
    bool recst[V];
    bool visited[V];
    for(int i=0;i<V;i++)
    {
        recst[i]=false;
        visited[i]=false;
    }
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        {
            if(DFSREC(adj,i,visited,recst)==true)
             return true;
        }
        
    }
    return false;
}
