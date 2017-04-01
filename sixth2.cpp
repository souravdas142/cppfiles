
#include<iostream>
using namespace std;
int main()
{
	long int a;
	float b;
	a=45698712368;
	b=4569.36;
	cout<<"There is two numbers a (long int) & b (float)"<<endl
		<<"we can mention the size of two variables in byte"<<endl
		<<"Enter a Integer number : ";
	int ab;
	cin>>ab;
	cout<<"The size of long int : "<<sizeof(long int)<<" bytes"<<endl
		<<"The size of float : "<<sizeof(float)<<" bytes"<<endl
		<<"The size of int : "<<sizeof(ab)<<" bytes"<<endl;
	return 0;
}
	

