#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main()
{

    vector<float> name(6,0.0);
    name[1]=4.00,name[2]=4.50,name[3]=5.00,name[4]=2.00,name[5]=1.50;
    int X,Y;
    cin>>X>>Y;
    cout<<setprecision(2)<<fixed;
    cout<<"Total: R$ "<<(name[X]*Y)<<endl;
    return 0;

}
