//pair:

#include<iostream>
#include<utility>
using namespace std;
class human{

	int age;
	public:
	human(int a){age=a;}
	void print(){cout<<endl<<age<<endl;}
	friend ostream& operator << (ostream& printt,human& temp){
		printt<<endl<<temp.age;
		return printt;
	}
};
int main()
{
	pair<string,int> man;
	man=make_pair("Sourav",19);
	cout<<man.first<<endl
		<<man.second<<endl;
	human mann(19);
	human mannn(20);
	pair<human,human> hugg(mann,mannn);
//	hugg=make_pair(mannn,mann);
	cout<<hugg.first<<endl<<hugg.second<<endl;
	return 0;
}
