#include<iostream>
using namespace std;
template <typename gen,typename gen2>
class hell
{
	gen a;
	gen2 c;
	public:
		void set(gen,gen2)
		void print(){cout<<endl<<a<<endl<<c<<endl;}
};
template <typename gen,typename gen2>
void hell<gen,gen2>::set(gen b,gen2 d)
{
	a=b;
	c=d;
}
int main()
{
	hell<int,float> boy;
	hell<float,int> girl;
	boy.set(58,89.36);
	girl.set(69.9,25);
	boy.print();
	girl.print();
	return 0;
}
