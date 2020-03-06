#include<iostream>
using namespace std;
template <typename gen>
void swp(gen &a,gen &b)
{
		swap(a,b);
}
int main()
{
	int number1,number2;
	cout<<"Enter a number1 : ";
	cin>>number1;
	cout<<"Enter anotther number2 : ";
	cin>>number2;
	swp(number1,number2);
	cout<<"number 1 : "<<number1<<endl
		<<"number 2 : "<<number2<<endl;
	return 0;
}


