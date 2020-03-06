/// this is all about how to handale addtion of two integer of verty verty big

#include<iostream>
#include<vector>
#include<string>
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
        it=0;


        char carry=0;
        char store=0;
        char cal=0;
        char str1=0,str2=0;
        int count1=1;
        int count2=1;
        bool flag=false,flag2=false;
        int size1,size2;

     for(size1=addition[0].size()-1,size2=addition[1].size()-1;;){

        cal=((((addition[0][size1])-48)+((addition[1][size2]) - 48))+carry);
        ///if(cal>9)
            store=(cal%10)+48;
        ///else
          ///  store=((((*first)-48)+((*second) - 48))+carry)
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

     temp.push_back((carry+48));
    while(temp.back()=='0'){
        temp.pop_back();
     }

     reverse(temp.begin(),temp.end());

        addition.push_back(temp);
        cout<<endl;
        cout<<endl;
        for(int i=0;i<(int)addition[0].size();i++)
        {
            cout<<addition[0][i];
        }
        cout<<endl;
        for(int i=0;i<(int)addition[1].size();i++)
        {
            cout<<addition[1][i];
        }
        cout<<endl<<"--------------------------------------------"<<endl;
        for(int i=0;i<(int)addition[2].size();i++)
        {
            cout<<addition[2][i];
        }
    }
    catch(const char* str){
        cerr<<str<<endl;
    }
    return 0;
}
