#include<iostream>
using namespace std;
template <typename a=int,int b=7>
class hell
{
	a ara[b];
	public:
	void print();
};
template <typename a,int b>
void hell<a,b>::print(){cout<<sizeof(ara)<<endl;}
int main()
{
	hell<> ara;
	ara.print();
	return 0;
}
