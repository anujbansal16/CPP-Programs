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
	void dfs(l v, vector <l> &result){		
		bool visited[V];
		l sum=0;
		memset(visited,false,sizeof(visited));
		for(l i=0;i<V;i++){				
	
			if(!visited[i]){
				l count=dfsUtil(i,visited);
				sum+=count;
				result.pb(count);
				
			}
		}
		cout<<findsum(sum,result)<<"\n";
		
	}
	l findsum(l sum,vector <l> result){
		l result1=0;
		for(vector <l> :: iterator it=result.begin();it!=result.end();it++){
			sum=sum-(*it);			
			result1+=(*it)*sum;
		}
		return result1;
		
	}
	int dfsUtil(l v, bool visited[]){
		l count=1;
		visited[v]=true;
		//cout<<v;		
		for(list <l> :: iterator it=adj[v].begin();it!=adj[v].end();++it){
			if(!visited[*it]){
					count+=dfsUtil(*it, visited);
				}
		}
		cout<<count<<"\n";
		return count;
		
	}
};



int main() {
	l n,m,u,v;
	vector <l> result;
	cin>>n>>m;
	Graph X(n);

	for(l i=0;i<m;i++){
		cin>>u>>v;
		X.addEdge(u,v);
		X.addEdge(v,u);

	}
	X.dfs(u,result);
    return 0;
}

