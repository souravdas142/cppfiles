//template overloading will dipend on number of parameter passed
#include<iostream>
using namespace std;
template <typename tmp>
void print(tmp b,tmp c)
{
	cout<<endl<<b<<endl<<c<<endl;
}
template <typename tmp2,typename d>
void print(tmp2 b, d c)
{
	cout<<b<<endl<<c<<endl;
}
int main()
{
	print(4,5);
	print(6.09,3.25);
	return 0;
}
