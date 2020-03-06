#include<iostream>
using namespace std;
template <typename gen>
class num
{
	gen b,c;
	public:
	num(gen d,gen e){b=d,c=e;}
	void swp()
	{
		swap(b,c);
	}
	void print()
	{
		cout<<b<<endl<<c<<endl;
	}
};
int main()
{
	num<const char*> number1("hello","hi");
	number1.print();
	number1.swp();
	number1.print();
	num<int> number2(5,9);
	number2.print();
	number2.swp();
	number2.print();
	return 0;
}
