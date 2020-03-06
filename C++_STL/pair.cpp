#include<iostream>
using namespace std;
//template <typename type>
pair<int,int> ret(int a,int b){

	pair<int,int> re(a,b);
	return re;
}
int main(){

	pair<int,int> q=ret(7,8);
	cout<<q.first<<endl<<q.second<<endl;
	return 0;
}
