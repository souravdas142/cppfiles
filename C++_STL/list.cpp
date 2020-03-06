#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> l1;
	for(int i=0;i<10;i++)
		l1.push_back(10*(i+1));
	list<int>::iterator it=l1.begin();
	for(;it!=l1.end();it++)
		cout<<*it<<"  ";
	l1.reverse();

	for(it=l1.begin();it!=l1.end();it++)
		cout<<*it<<"  ";
	l1.sort();
	for(it=l1.begin();it!=l1.end();it++)
		cout<<*it<<"  ";
	l1.push_back(110);
	l1.push_front(-221);
	for(it=l1.begin();it!=l1.end();it++)
		cout<<*it<<"  ";

	cout<<endl;
	return 0;
}
