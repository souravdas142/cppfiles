#include<iostream>
using namespace std;
template <typename a,typename b>
class base
{
	a nam;
	b naam;
	public:
	base(a,b);
	void set(a,b);
	void print();
};
template <typename a,typename b>
base<a,b>::base(a ba,b ab){nam=ba,naam=ab;}
template <typename a,typename b>
void base<a,b>::set(a ab,b ba){naam=ba,nam=ab;}
template <typename a,typename b>
void base<a,b>::print(){cout<<endl<<nam<<endl<<naam<<endl;}

template <typename a,typename b,typename c,typename e>
class derived:public base<a,b>
{
	c man;
	e kak;
	public:
	derive(c de,e ed,a ba,b ab):base<a,b>(ba,ab){man=de,kak=ed;}
	void print(){cout<<endl<<man<<endl<<kak<<endl;}
};

int main()
{
	derive<int,int,int,int> mango(56,60,64,68);
	derive.set(102,3);
	derive.base::print();
	derive.print();
	return 0;
}
