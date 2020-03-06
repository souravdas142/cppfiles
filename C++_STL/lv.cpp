#include<iostream>
#include<vector>
#include<map>
#include<cstdlib>

using namespace std;
namespace stdnt{
	class students{
		string name;
		int dob;
		string address;
		string mob;
		double height;
	public:
		students(string nm,int db,string adr,string mb,double hg):name(nm),dob(db),address(adr),mob(mb),height(hg){};
		friend ostream& operator << (ostream& print,students& temp){
			print<<"Name : "<<temp.name
			<<endl<<"Date of birth : "<<temp.dob
			<<endl<<"Address : "<<temp.address
			<<endl<<"Mobile : "<<temp.mob
			<<endl<<"Height : "<<temp.height;
			return print;
		}
	};
	map<int,vector<students>> student;
}
auto inser_t=[]() -> vector<stdnt::students> {
    vector<stdnt::students> temp;
    temp.clear();
    char check;
    string name,addr,mob;
    int dob;
    double height;
	while(1){	
		if(!temp.size())
			cout<<"Do you create any students ? ";
		else
			cout<<"Do you create more students ? ";

		cin>>check;
		switch(check){
			case'n':
			case'N':
				return temp;
				break;
			case 'y':
			case 'Y':
				break;
			default:
				cerr<<"wrong input (Y/N) "<<endl;
				continue;
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
		stdnt::students tem_p(name,dob,addr,mob,height);
		temp.push_back(tem_p);
	}
	return temp;

};
int main(){
	int year;
	while(1){
		cout<<"Enter a year : (ENter -1 to exit) : ";
		cin>>year;
		if(year==-1)
			break;
		stdnt::student[year]=inser_t();
	}
	system("clear");
	for(map<int,vector<stdnt::students>>::iterator it=stdnt::student.begin();it!=stdnt::student.end();it++){
		for(vector<stdnt::students>::iterator itt=(it->second).begin();itt!=(it->second).end();itt++){
			cout<<"year : "<<it->first<<endl
			<<*itt<<endl<<endl;
		}
	}
return 0;
}
