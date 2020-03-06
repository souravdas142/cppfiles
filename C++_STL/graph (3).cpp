#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

template <typename _Tname>
class node_Str{

	_Tname edge;
	int weight;
	public:
	void alloc(_Tname m){edge=m;cout<<"Enter Weight : ";cin>>weight;}
	_Tname Edge(){return edge;}
	int Weight(){return weight;}
	friend ostream& operator << (ostream& print,node_Str<_Tname>& tmp){
		print<<tmp.edge<<" ("<<tmp.weight<<") ";
		return print;
	}
};

auto store=[](){

	map<int,vector<node_Str<int> > > storage;
	vector<node_Str<int> > temp;
	node_Str<int> tmp;
	int node,edge;
	int nodeNo,edgeNo;
	cout<<"Enter Node & Edge : ";
	cin>>nodeNo>>edgeNo;
	for(int j=0;j<nodeNo;j++){
		cout<<"Enter Node : ";
		cin>>node;
		for(int i=0;i<(nodeNo-1);i++){
			cout<<"Enter Edge : ";
			cin>>edge;
			tmp.alloc(edge);
			temp.push_back(tmp);
	
		}
		storage[node]=temp;
		temp.clear();
	}
	return storage;
};

void print(map<int,vector<node_Str<int > > > graph){

	map<int,vector<node_Str<int> > >::iterator ptr=graph.begin();
	for(;ptr!=graph.end();ptr++){
		for(vector<node_Str<int> >::iterator vect=(ptr->second).begin(); vect!=(ptr->second).end();vect++)
			cout<<"  "<<ptr->first<<" ---------> "<<*vect;
		cout<<endl;
	}
}

int main(){
	map<int,vector<node_Str<int> > > str;
	str=store();
	cout<<endl<<endl;
	print(str);
	cout<<endl<<endl;
	
	return 0;
}
