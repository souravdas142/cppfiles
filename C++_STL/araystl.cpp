#include<bits/stdc++.h>
using namespace std;
class size{
	public:
	const int sz;
	size(int a):sz(a){}
};
	
int main(){

	
	cout<<"ENter upper bound : ";
//	int store;
//	cin>>store;
	const int up=100;
	array<int,up> prime;
	prime.fill(1);
	prime[0]=0;
	prime[1]=0;
	for(int i=2;i<=abs(floor(sqrt(up)));i++)
	{
		for(int j=2;j*i<=up;j++)
			prime[i*j]=0;
	}
	for(int i=0;i<up;i++)
	{
		if(prime[i]==1)
			cout<<" "<<i;
	}
	cout<<endl;
	return 0;
}
