//Array...

#include<iostream>
#include<array>
using namespace std;
int main(){

	array<int,5> numbers={5,7,9,2,45};
	array<int,5> numbers2={78,70,25,4,6};
	cout<<endl<<numbers.at(2);
	cout<<endl<<numbers[2]<<endl;
	cout<<endl<<numbers.front();
	cout<<endl<<numbers.back();
	numbers.fill(0);
	cout<<numbers[10]<<endl;
	numbers.swap(numbers2);

	for(int i=0;i<5;i++)
		cout<<" "<<numbers[i];
	cout<<endl;
	for(int i=0;i<5;i++)
		cout<<" "<<numbers2[i];
	
	return 0;
}
