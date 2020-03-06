#include<iostream>
#include<algorithm>
#include<vector>		//header for vector stl
#include<map>			//header for map stl
using namespace std;

template <typename _Tname>		//creating a class of template type
class node_Str{					//it's besically a container of 
								// edge and it's weight
	_Tname edge;
	int weight;
	public:
	void alloc(_Tname m){edge=m;cout<<"Enter Weight : ";cin>>weight;}	//initialize object members
	_Tname Edge(){return edge;}
	int Weight(){return weight;}
	friend ostream& operator << (ostream& print,node_Str<_Tname>& tmp){		//insertion operator
		print<<tmp.edge<<" ("<<tmp.weight<<") ";							// overloading to print
		return print;														//the object
	}
};

auto store=[](){		//lamda function. auto is used for automatically define pointer of lambda 
													//function capture list is blank
	map<int,vector<node_Str<int> > > storage;	//creating object of map type	
	vector<node_Str<int> > temp;					//creating temporary object of vector type
	node_Str<int> tmp;
	int node,edge;
	int nodeNo,edgeNo;
	cout<<"Enter Node & Edge : ";		// taking input how much node and edges in a simple complete graph G
	cin>>nodeNo>>edgeNo;
	for(int j=0;j<nodeNo;j++){			
		cout<<"Enter Node : ";
		cin>>node;
		for(int i=0;i<(nodeNo-1);i++){		//A vertex V in asimple complete graph has always exactly n-1 degree/adjucent node
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

void print(map<int,vector<node_Str<int > > > graph){		//printing the undirected simple complete graph

	for(map<int,vector<node_Str<int> > >::iterator ptr=graph.begin();ptr!=graph.end();ptr++){ // taking iterator of map stl
		for(vector<node_Str<int> >::iterator vect=(ptr->second).begin(); vect!=(ptr->second).end();vect++) //taking iterator of vector stl
			cout<<"  "<<ptr->first<<" ---------> "<<*vect;
		cout<<endl;
	}
}

int main(){
	map<int,vector<node_Str<int> > > str;		//creating graph containter...
	str=store();								//calling store() function basically lambda function
	cout<<endl<<endl;
	print(str);									//printing graph
	cout<<endl<<endl;
	
	return 0;
}
