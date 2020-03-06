#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main(){
	char namee[20];
	vector<char> name(20);
	gets(name);
	cin.getline(namee,20,'.');
//	char store;
//	for(int i=0;i<21;i++)
//	{
//		cin>>store;
//		name.push_back(store);
//	}
	cout<<endl<<"********** DISPLAY ***********"<<endl;
	for(int i=0;i<((int)name.size());i++)
	{
		cout<<name[i];
	}
	cout<<endl<<endl;
	return 0;
}
