#include<iostream>
#include<cmath>
#define SIZE 10
using namespace std;
int main()
{
	int size;
	bool prime[SIZE];
	cout<<"Enter upper bound : ";
	cin>>size;
	for(int i=0;i<=size;i++)
		prime[i]=true;			// initially initialze all eliments are prime
	prime[0]=false;			// 0 is not prime so flagg is not prime
	prime[1]=false;			//			""
	double sqart=sqrt(size); // a factor of a number is must be less than 
	for(int i=2;i<sqart;i++) // its square root
	{
		if(prime[i]==1)
		{
			for(int j=2;(i*j)<=size;j++)	// j must be less than n and i*j must be (n or for lesser number of n)
				prime[i*j]=false;			// if prime[i] is prime then all other multipliers of i are non prime so , flagg it..
		}
	}
	cout<<endl;
	for(int i=2;i<=size;i++)
	{
		if(prime[i]==1)						// for every prime[i] = true, are prime
			cout<<"  "<<i<<"  ";
	}
	cout<<endl;
	return 0;
}
