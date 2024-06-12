#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class garph{
	public:
		unordered_map<int, list<int> > adj;
		void addEdge(int u, int v,bool direction){
			adj[u].push_back(v);
			if(direction == 0)
			{
				adj[v].push_back(u);
			}
		}
		void printAdjList(){
			for(auto i:adj){
				cout<<i.first<<"->";
				for(auto j: i.second){
					cout<<j<<" ";
				}
				cout<<endl;
			}
		}
};
int main()
{
	int n;
	cout<<"enter the number of nodes"<<endl;
	cin>>n;
	
	int m;
	cout<<"enter the number of edges"<<endl;
	cin>>m;
	
	garph g;
	
	for(int i=0; i<m; i++){
		int v,u;
		cin>>u>>v;
		//creating an undirected graph
		g.addEdge(u,v,0);
	}
	return 0;
}

