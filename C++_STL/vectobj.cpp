#include<iostream>
#include<vector>
using namespace std;
class student{

	int roll;
public:
	student(){}
	void init(int r){roll=r;}
	friend ostream& operator << (ostream& print,student& temp){

		print<<endl<<"Roll : "<<temp.roll;
		return print;
	}
};

int main(){

	vector<student> kgei;
	student temp;
	int how;
	cout<<"How many Students ? ";
	cin>>how;
	int roll;
	for(int i=0;i<how;i++)
	{
		cout<<"Enter roll : ";
		cin>>roll;
		temp.init(roll);
		kgei.push_back(temp);
	}

	for(int i=0;i<((int)kgei.size());i++)
	{
		cout<<"For Student "<<i+1<<endl<<endl<<kgei[i]<<endl;
	}
	return 0;
}



