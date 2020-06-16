vector <int> bfs(vector<int> g[], int N) {

    // Your code here
    vector<int> k;
    queue<int> q;
    bool visited[N+1];
    for(int i=0;i<N;i++)
      visited[i]=false;
     int s=0;
     q.push(s);
    visited[s]=true;
    while(q.empty()==false)
    {
        int u=q.front();
        k.push_back(u);
        q.pop();
        for(auto v : g[u])
        {
            if(visited[v]==false)
            {
                visited[v]=true;
                q.push(v);
            }
        }
    }
    return k;
}
    
