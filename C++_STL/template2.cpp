#include<iostream>
using namespace std;
template <typename gen,typename gen2>
void swp(gen &a,gen2 &b)
{
	gen tmp;
	tmp = a;
	a=b;
	b=(gen)tmp;
}
void swp(string a,string b)
{
	string tmp=a;
	a=b;
	b=tmp;
	cout<<endl<<"a = "<<a<<"b = "<<b<<endl;
}
template <typename gen1,typename gen2,typename gen3>
void swp(gen1 &a,gen2 &b,gen3 &c)
{
	cout<<a<<b<<c<<endl;
}

int main()
{
	float a=2.9,b=7.3;
	int d=80,e=5;
	string m="Sourav",n="Das";
	swp(a,b);
	swp(d,e);
	cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
	cout<<"d = "<<d<<endl<<"e = "<<e<<endl;
	swp(m,n);
	swp(a,b,d);
	return 0;
}
