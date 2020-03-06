#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> hello(5,10);
    for(vector<int>::iterator it=hello.begin();it!=hello.end();it++){

     int name=*it;
     cout<<name<<endl;
     cout<<*it;
    }
    return 0;
}
