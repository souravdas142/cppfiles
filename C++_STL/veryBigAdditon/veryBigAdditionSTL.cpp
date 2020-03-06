#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    try{
        vector < vector < char > > addition;
        vector < char > temp;
        char it=0;
        cout<<"Enter a number : ";
        for(int i=0;;i++){
           cin.get(it);
           if(it=='\n')
                break;
            temp.push_back(it);
        }
        addition.push_back(temp);
        temp.clear();
        cout<<"Enter a number : ";
        it=0;
        for(int i=0;;i++){
           cin.get(it);
                if(it=='\n')
            break;
           temp.push_back(it);
        }
        addition.push_back(temp);
        temp.clear();
        char carry=0,store=0,cal=0,str7,str8;
        int size1,size2;
        for(size1=addition[0].size(),size2=addition[1].size();!((size1==0) & (size2==0));){
			str7=0;str8=0;
			if(size1>0){
				size1--;
				str7=((addition[0][size1]) - 48);
			}
			if(size2>0){
				size2--;
				str8=((addition[1][size2]) - 48);
			}
            cal=((str7+str8)+carry);
            store=(cal%10)+48;
            temp.push_back(store);
            carry=cal/10;

        }  ///End of for loop
        if(!(carry+'0')=='0')
            temp.push_back((carry+48));
        reverse(temp.begin(),temp.end());
        addition.push_back(temp);
        for(int i=0;i<(int)addition[2].size();i++)
            cout<<addition[2][i];
        cout<<endl;

    }
    catch(const char* str){
        cerr<<str<<endl;
    }
    return 0;
}
