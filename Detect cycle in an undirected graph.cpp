bool DFSREC(vector<int> g[],int s,bool visited[],int parent)
{
    visited[s]=true;
    for(int u : g[s])
    {
        if(visited[u]==false)
        {
          if(DFSREC(g,u,visited,s)==true)
             return true;
        }
        else if(u!=parent)
         return true;
    }
    return false;
}
bool isCyclic(vector<int> g[], int V)
{
   // Your code here
   bool visited[V];
   for(int i=0;i<V;i++)
    visited[i]=false;
   for(int i=0;i<V;i++)
     if(visited[i]==false)
       if(DFSREC(g,i,visited,-1)==true)
          return true;

   return false;   
}
