#include<iostream>
using namespace std;
template <typename T,typename T2=int>
class abc{

	T a;
	T2 b;
	public:
	abc(T c,T2 d):a(c),b(d){}
	void print(){cout<<a<<endl<<b;}
};

int main(){

	abc<string> d("Sourav",5);
	d.print();
	return 0;
}
