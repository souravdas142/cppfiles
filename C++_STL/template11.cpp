#include<iostream>
using namespace std;
template <typename T>
T print(T man){
	return man;
}

int main(){

	cout<<print(10);
	return 0;
}
