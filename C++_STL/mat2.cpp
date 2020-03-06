#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<vector<int>> matA;
	vector<int> temp;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			temp.push_back((2*(j+i+1)));
		matA.push_back(temp);
		temp.clear();
	}
	for(int i=0;i<3;i++){
		cout<<endl;
		for(int j=0;j<3;j++)
			cout<<matA[i][j]<<"\t";
	}
	int sum=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i+j>=2)
				sum+=matA[i][j];
		}
	}
	cout<<endl<<"Total Sum = "<<sum<<endl;
	return 0;
}
