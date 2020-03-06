#include<iostream>
using namespace std;
template <typename T>
class abc{

	T a;
	public:
	abc(T c): a(c) {}
	void print(){cout<<a;}
};
int main()
{
	abc<int> d(5);
	d.print();
	return 0;
}

