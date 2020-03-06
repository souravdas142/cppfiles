#include<iostream>
using namespace std;
template <typename seasor>
void print(seasor tiny)
{
	cout<<tiny<<endl;
}

void print(double seasor)
{
	cout<<"double = "<<seasor<<
		endl;
}
int main()
{
	print(5.48);
	print("hello sourav");
	return 0;
}

