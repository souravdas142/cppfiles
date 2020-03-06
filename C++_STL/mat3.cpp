#include<iostream>
#include<vector>
using namespace std;
namespace print{

	void printmat(vector<vector<int>>& mat){
		cout<<endl;
		for(int i=0;i<((int)mat.size());i++){
			cout<<endl;
			for(int j=0;j<((int)mat[0].size());j++)
				cout<<mat[i][j]<<"\t";
		}
		cout<<endl;
	}
}

int main()
{
	vector<vector<int>> matA,matB;
	vector<int> temp;
	for(int i=0;i<3;i++){
		temp.clear();
		for(int j=0;j<3;j++){
			temp.push_back((2*(i+j+1)));
		}
		matA.push_back(temp);
		matB.push_back(temp);
	}
	print::printmat(matB);
	matB[2].pop_back();
	matB[2].push_back(5);
	print::printmat(matB);
	print::printmat(matA);
	if(matA==matB)
		cout<<"Two matrices are identical"<<endl;
	else
		cout<<"not identical"<<endl;
	return 0;
}
