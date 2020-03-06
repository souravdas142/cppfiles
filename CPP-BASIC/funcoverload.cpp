#include<iostream>
using namespace std;

//float add(float a, float b);

float add(float a,float b)
{
	return a+b;
}
int add(int a,int b, int c);
int main()
{
	cout<<add(3.5,4.1)<<endl;

	return 0;
}


int add(int a, int b, int c)
{
	return a+b+c;
}
