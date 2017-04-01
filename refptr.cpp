//Example of  reference to pointer
//rendering from stackoverflow

#include<iostream>
using namespace std;
void changeptr(int *&ptr)
{
	delete ptr;
	ptr=new int(6);
}
int main()
{
	int *myptr = new int(5);
	cout<<"myptr = "<<(*myptr)<<endl;
	changeptr(myptr);

	cout<<"myptr = "<<(*myptr)<<endl;
	return 0;
}


	
