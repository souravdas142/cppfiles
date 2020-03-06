#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    try{
        vector<vector<char>> addition;
        vector<char> temp;
        char it=0;
        cout<<"Enter a number : ";
        for(int i=0;;i++){
           cin.get(it);
           if(it=='\n')
            break;
            temp.push_back(it);
        }
        if(temp.size()==0)
            throw "Have not Entered any Value";
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
        if(temp.size()==0)
            throw "Have not Entered any Value";
        addition.push_back(temp);
        temp.clear();
        char carry=0,store=0,cal=0,str1=0,str2=0;
        int count1=1,count2=1,size1,size2;
        bool flag=false,flag2=false;
        for(size1=addition[0].size()-1,size2=addition[1].size()-1;;){
            cal=((((addition[0][size1])-48)+((addition[1][size2]) - 48))+carry);
            store=(cal%10)+48;
            temp.push_back(store);
            carry=cal/10;
            if((count1==(int)addition[0].size()) ^ (count2==(int)addition[1].size())){
                if(count1==(int)addition[0].size()){
                    count2++;
                    size2--;
                    if(flag==false){
                        str1=(addition[0][size1]);
                        addition[0][size1]='0';
                        flag=true;
                    }
                }
                else{
                    count1++;
                    size1--;
                    if(flag2==false){
                        str2=(addition[1][size2]);
                        addition[1][size2]='0';
                        flag2=true;
                    }
                }
            }
            else if((count1==(int)addition[0].size()) && (count2==(int)addition[1].size()))
                break;
            else
            {
                count1++;
                count2++;
                size1--;
                size2--;
            }
        }  ///End of for loop
        if(flag==true)
            addition[0][size1]=str1;
        if(flag2==true)
            addition[1][size2]=str2;
        if((carry+'0')!='0')
            temp.push_back((carry+48));
        reverse(temp.begin(),temp.end());
        addition.push_back(temp);
        cout<<endl<<endl;
        for(int i=0;i<(int)addition[0].size();i++)
            cout<<addition[0][i];
        cout<<endl;
        for(int i=0;i<(int)addition[1].size();i++)
            cout<<addition[1][i];
        cout<<endl<<"--------------------------------------------"<<endl;
        for(int i=0;i<(int)addition[2].size();i++)
            cout<<addition[2][i];
        cout<<endl;
        throw "all ok";
    }
    catch(const char* str){
        cerr<<str<<endl;
    }
    return 0;
}
