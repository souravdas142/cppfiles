#include<iostream>
#include<vector>
#include<map>
#include<cstdlib>

using namespace std;
namespace lv{
	class love{
		string name;
		int dob;
		string address;
		string mob;
		double height;
	public:
		love(string nm,int db,string adr,string mb,double hg):name(nm),dob(db),address(adr),mob(mb),height(hg){};
		friend ostream& operator << (ostream& print,love& temp){
			print<<"Name : "<<temp.name
                 <<endl<<"Date of birth : "<<temp.dob
                 <<endl<<"Address : "<<temp.address
                 <<endl<<"Mobile : "<<temp.mob
                 <<endl<<"Height : "<<temp.height;
			return print;
		}
	};
	map<int,vector<love>> lov;
}
///vector<lv::love> inser_t(){
auto inser_t=[]() -> vector<lv::love> {    ///
    vector<lv::love> temp;
    temp.clear();
    char check;
    string name,addr,mob;
    int dob;
    double height;
    while(1){
		if(!temp.size())
			cout<<"Do you create any lover ? ";
		else
			cout<<"Do you create more lover ? ";
		cin>>check;
		switch(check){
			case'n':
			case'N':
				return temp;
				break;
			default:

				break;
		}
		cout<<"ENter name : ";
		cin>>name;
		cout<<"Enter Address : ";
		cin>>addr;
		cout<<"Enter Mobile no. ";
		cin>>mob;
		cout<<"ENter dob : ";
		cin>>dob;
		cout<<"ENter height : ";
		cin>>height;
		lv::love tem_p(name,dob,addr,mob,height);
		temp.push_back(tem_p);
		}
};
int main(){
	int year;
	while(1){
		cout<<"Enter a year : (ENter -1 to exit)";
		cin>>year;
		if(year==-1)
			break;
		lv::lov[year]=inser_t();
	}
	system("CLS");
	for(map<int,vector<lv::love>>::iterator it=lv::lov.begin();it!=lv::lov.end();it++){
		for(vector<lv::love>::iterator itt=(it->second).begin();itt!=(it->second).end();itt++){
			cout<<"year : "<<it->first<<endl
			<<*itt<<endl<<endl;
		}
	}
return 0;
}
