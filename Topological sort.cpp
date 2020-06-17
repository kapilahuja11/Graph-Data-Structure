void top(int s, vector<int> adj[], bool visited[], stack<int>& st)
{
    visited[s]=true;
    for(int u: adj[s])
    {
        if(visited[u]==false)
        top(u,adj,visited,st);
    }
    st.push(s);
}
int* topoSort(int V, vector<int> adj[]) {
    // Your code here
    bool visited[V];
    int *arr=new int[V];
    stack<int> st;
    for(int i=0;i<V;i++)
    visited[i]=false;
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
        top(i,adj,visited,st);
    }
    int i=0;
    while(st.empty()==false)
    {
        arr[i]=st.top();
        st.pop();
        i++;
    }
    return arr;
}
