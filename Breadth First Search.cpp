#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long l;
class Graph{
	public:
	l V;
	list <l> *adj;
	Graph(l m){
		V=m;
		adj=new list<l>[V];
	}
	void addEdge(l u,l v){
		adj[u].pb(v);
	}
	vector<l> bfs(l index){
		l inc=1;
		vector <l> result(V,-1);
		bool visited[V];memset(visited,false,sizeof(visited));
		queue <l> q;
		q.push(index);
		visited[index]=true;
		result[index]=0;
		while(!q.empty()){
			l frnt=q.front();
			visited[frnt]=true;
			for(list<l> :: iterator it=adj[frnt].begin();it!=adj[frnt].end();++it){
				if(!visited[*it]){
					result[*it]=result[frnt]+1;
					q.push(*it);
					visited[*it]=true;
				}
			}
			q.pop();
		}
		return result;		
	}
	
};

int main() {
	l t;
	cin>>t;
	l n,m,u,v,index,co;
	while(t--){
		co=0;
		cin>>n>>m;
		Graph X(n+1);
		for(l i=0;i<m;i++){
			cin>>u>>v;
			X.addEdge(u,v);
			X.addEdge(v,u);
		}
		cin>>index;
		vector<l> result=X.bfs(index);
		for(l i=1;i<n+1;i++){
			if(i==index) continue;
			if(result[i]!=-1)
				cout<<result[i]*6<<" ";
			else
				cout<<"-1 ";
		}
		cout<<"\n";
	}
		
    return 0;
}
