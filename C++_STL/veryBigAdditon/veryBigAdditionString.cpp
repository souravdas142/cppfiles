#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    try{
        string num1,num2,num3;
        char str7,str8,cal=0,store=0,carry=0;
        cin>>num1;
        if(!num1.size())
            throw "You've not enter any number";
        cin>>num2;
        if(!num2.size())
            throw "You've not enter any number";
        for(int size1=num1.size(),size2=num2.size();!((size1==0) & (size2==0));){
            str7=0;str8=0;
            if(size1>0){
                size1--;
                str7=((num1[size1]) - 48);
            }
            if(size2>0){
                size2--;
                str8=((num2[size2]) - 48);
            }
            cal=((str7+str8)+carry);
            store=(cal%10)+48;
            num3.push_back(store);
            carry=cal/10;
        }
        if(carry+'0'==0)
            num3.push_back((carry+'0'));
        reverse(num3.begin(),num3.end());
        cout<<endl<<num3<<endl;
    }
    catch(const char* e){
        cerr<<endl<<e<<endl;
    }
        return 0;
}
