#include<iostream>
using namespace std;
class voot
{
	int invisble_power;
	public:
		voot(int power){invisble_power=power;}
		int showDetails(){return invisble_power;}
		friend int main();
};

int main()
{
	voot sourav(5);
	cout<<"invisible power = "<<sourav.showDetails()<<endl;
	cout<<endl<<"friend function : invisble power = "<<sourav.invisble_power<<endl;

	return 0;
}
