#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<vector<int>> array1,array2,array3;
	vector<int> temp;
//	cout<<"Filling Out first Array"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++){
			temp.push_back(2*(j+1+i));
		}
		array1.push_back(temp);
		temp.clear();
	}
	cout<<endl<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<endl;
		for(int j=0;j<3;j++)
			cout<<"array1["<<i<<"]["<<j<<"] = "<<array1[i][j]<<"    ";
	}
	cout<<endl<<endl;
	//filling out second array
	for(int i=0;i<3;i++)
	{
		temp.clear();
		for(int j=0;j<3;j++){
			temp.push_back((2*(j+2+i)));
		}
			array2.push_back(temp);
	}
	cout<<endl<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<endl;
		for(int j=0;j<3;j++)
			cout<<"array2["<<i<<"]["<<j<<"] = "<<array2[i][j]<<"    ";
	}
	cout<<endl<<endl;
	
	int m,n;

	for(int i=0;i<3;i++)
	{
		temp.clear();
		for(int j=0;j<3;j++)
		{
			m=0,n=0;
			for(int k=0;k<3;k++)
			{
				m=array1[i][k]*array2[k][j];
				n+=m;
			}
			temp.push_back(n);
			
		}
		array3.push_back(temp);
	}


	// printing the array element of 3
	//
	
	for(int i=0;i<3;i++)
	{
		cout<<endl;
		for(int j=0;j<3;j++)
			cout<<"array3["<<i<<"]["<<j<<"] = "<<array3[i][j]<<"    ";
	}
	cout<<endl<<endl;
	return 0;
}
