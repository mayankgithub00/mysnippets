 vi adj[MX];
 vi vis(MX);
 void dfs(int S)
 {
 	vis[S]=1;
 	for(auto& i:adj[S])
 	{
 		if(!vis[i])
 		{
 			dfs(i);
 		}
 	}
 }