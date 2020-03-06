#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<vector<int>> vect2d;
	//int store;
	vector<int> temp;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<7;j++){
			//cout<<endl<<"Enter a number : ";
			//cin>>store;
			temp.push_back((10*(j+1)));
		}
		vect2d.push_back(temp);
		temp.clear();
	}
	cout<<endl<<"capacity : "<<vect2d.capacity()
		<<endl<<"Size : "<<vect2d[0].size()<<endl;
	cout<<endl<<"*************** OUTPUT ******************"<<endl;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<7;j++)
		{
			cout<<endl<<"vect2d["<<i<<"]["<<j<<"] = "<<vect2d[i][j];
		}
	}
	cout<<endl;
	return 0;
}

