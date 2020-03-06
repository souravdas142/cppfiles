#include<iostream>
#include<map>
#include<algorithm>
using namespace std;


int main()
{

    map<int,int> p;
    p[5]=6;
    map<int,int>::iterator it=p.begin();
    cout<<it->first<<" = "<<it->second<<endl;
    p.size()

    return 0;
}
