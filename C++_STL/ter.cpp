#include<iostream>
using namespace std;
template <typename temp>
double print(temp& a,int& b)
{
	return a*b;
}
int main()
{
	double c = 54.34;
	int d = 6;
	cout<<endl<<print(c,d)<<endl;
	return 0;
}
		
