#include<iostream>
using namespace std;
template <typename T,int b>
class abc{

	T a;
	public:
	void print(){a=b;cout<<a;}
};
int main()
{
	abc<int,5> d;
	d.print();
	return 0;
}
