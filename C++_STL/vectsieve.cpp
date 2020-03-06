#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){

	int up;
	cout<<"ENter  a number upto prime : ";
	cin>>up;
	vector<int> prime((up+1),1);
	prime[0]=prime[1]=0;
	int sq=floor(sqrt(up));
	for(int i=2;i<=sq;i++)
	{
		for(int j=2;(i*j)<=up;j++)
			prime[i*j]=0;
	}

	for(int i=0;i<=up;i++)
	{
		if(prime[i]==1)
			cout<<i<<"    ";
	}
	cout<<endl<<endl;
	return 0;
}
