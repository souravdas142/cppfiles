#include<iostream>
#include<iomanip>
using namespace std;
class friendfun{
		long int roll;
		double marks1, marks2, avgmarks;
	public:
		void setData(){
			cout<<"Enter the Roll:: ";
			cin>>roll;
			cout<<"Enter Marks1:: ";
			cin>>marks1;
			cout<<"Enter Marks2:: ";
			cin>>marks2;
		}
		void showDetails(){    // show the student details
			cout<<"-----------------------------"<<endl;
			cout<<"Student Details ::"<<endl;
			cout<<"-----------------------------"<<endl;
			cout<<"Roll    ::"<<setw(8)<<roll<<endl;
			cout<<"Marks1  ::"<<setw(8)<<marks1<<endl;
			cout<<"Marks2  ::"<<setw(8)<<marks2<<endl;
		}
		friend avgmarks(friendfun ff); //objects as friend function argument
};

float avgmarks(friendfun ff){   // friend function for average marks
	return float(ff.marks1 + ff.marks2)/2.0;
}

int main(){
	friendfun f1;        // f1 object created here
	f1.setData();
	f1.showDetails();
	cout<<"Average ::"<<setw(8)<<avgmarks(f1);
return 0;
}
