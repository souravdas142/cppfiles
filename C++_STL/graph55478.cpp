#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

template <typename _Tname>
class edgeWeight{

	_Tname node;
	int weight;
public:

	edgeWeight(_Tname nde):node(nde){cout<<"Enter Weight : ";cin>>weight;}
	_Tname Edge(){
		return node;
	}
	int Weight(){
		return weight;
	}
	friend ostream& operator << (ostream& print,edgeWeight temp){
		print<<temp.node<<" ("<<temp.weight<<") ";
		return print;
	}
};

int main()
{

	int nodeNo,edgeNo;
	map<int,vector<edgeWeight<int> > > graph;
	vector<edgeWeight<int> > temp;
	edgeWeight<int> tmp;
	cout<<"Enter node and edge number : ";
	cin>>nodeNo>>edgeNo;
	for(int i=0;i<edgeNo;i++){


	}

}
