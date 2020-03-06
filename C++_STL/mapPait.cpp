#include<iostream>
#include<map>
#include<utility>
using namespace std;
int main()
{

    map<string,float> students;
    string Name;
    float number;
    for(int i=0;i<3;i++){

        cin>>Name>>number;
        students.insert(pair<string,float>(Name,number));
    }
      cout<<"*********** OUTPUT ****************"<<endl;
    map<string,float>::iterator it=students.begin();
    for(;it!=students.end();it++)
        cout<<"Name : "<<it->first<<endl<<"Marks : "<<it->second<<endl;
    return 0;
}
