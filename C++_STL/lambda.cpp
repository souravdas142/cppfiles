#include<iostream>
using namespace std;
int main()
{
	double radius;
	double circumfarance;
	cin>>radius>>circumfarance;
	auto lamb=[&](){

		return 2*3.14*radius;
	};

	auto str=lamb();
	cout<<"circumfarance = "<<str<<endl;
	return 0;
}

