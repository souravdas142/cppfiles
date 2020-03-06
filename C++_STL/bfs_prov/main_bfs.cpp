#include<iostream>
#include<vector>
#include<map>
#include<utility>
#include<deque>
#include<array>
#include<algorithm>
using namespace std;

void setGraph(map<int,vector<int> >& graph,int& a,int &b){
	vector<int> temp;
	for(int i=0;i<2;i++){
		if(graph.find(a)==graph.end()){
			temp.push_back(b);
			graph.insert(pair<int,vector<int > >(a,temp));
			temp.clear();
	
		}
		else
			graph[a].push_back(b);
		swap(a,b);
	}
}


void bfs(map<int,vector<int> >& graph){
	deque<int> que;
	int x,y;
	cin>>x>>y;
	array<int,1000> dist,pre;
	dist.fill(65000);
	pre.fill(0);
	int source=x;
	dist[source]=0;
	pre[source]=source;
	que.push_back(source);
	for(int i=0;i<(int)graph.size();i++){
		for(int k=0;k<(int)graph[que.front()].size();k++){
			if(dist[graph[que.front()].at(k)]==65000){
				que.push_back(graph[que.front()].at(k));
				dist[que.back()]=dist[que.front()]+1;
				pre[que.back()]=que.front();
				if(dist[y]!=65000)
					break;
			}
		}
		que.pop_front();
	}
	vector<int> tmp;
	int temp=y;
	if(y!=x)
		tmp.push_back(y);
	for(;;){
		temp=pre[temp];
		tmp.push_back(temp);
		if(temp==x)
			break;
	}
	cout<<tmp.size()<<endl;
	for(vector<int>::reverse_iterator rit=tmp.rbegin();rit!=tmp.rend();rit++){
		cout<<*rit<<" ";
	}

}


int main(){
	map<int,vector<int> > graph;
	int m,n,t,c;
	int a,b;
	cin>>m>>n>>t>>c;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		setGraph(graph,a,b);
	}

	bfs(graph);
	return 0;
}

