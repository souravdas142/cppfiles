#include<iostream>
using namespace std;
template <typename gen>
gen swp(gen &a,int &b)
{
	bool check=true;
	if(a==b)
		check=false;
	else
		cout<<"";//swap(a,b);
	return check;
}

//void swp(int &a,int &b)
//{
//	bool check=true;
//	if(a==b)
//		check=false;
//	else
//		swap(a,b);
//	return check;
//	cout<<"overrided"<<endl;
//}
int main()
{
	float number1;
	int /*a(20),b(30),*/number2;
	cout<<"Enter a number1 : ";
	cin>>number1;
	cout<<"Enter anotther number2 : ";
	cin>>number2;
//	swp(a,b);
	bool check = swp(number1,number2);
	if(!check)
	{
		cout<<"not swapped"<<endl;
		return 1;
	}
	cout<<"number 1 : "<<number1<<endl
		<<"number 2 : "<<number2<<endl;
	return 0;
}


