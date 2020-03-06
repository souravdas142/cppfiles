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
        int count1=1;
        int count2=1;

     for(int size1=addition[0].size()-1,size2=addition[1].size()-1;;){

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
                addition[0][size1]='0';
            }

            else{
                count1++;
                size1--;
                addition[1][size2]='0';
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


     }
     temp.push_back((carry+48));
    while(temp.back()=='0'){
        temp.pop_back();
     }

     reverse(temp.begin(),temp.end());

        addition.push_back(temp);
        cout<<endl;
        temp.clear();
        for(int i=0;i<(int)addition[2].size();i++)
        {
            cout<<addition[2][i];
        }
        cout<<endl;
        addition.clear();
    }
    catch(const char* str){
        cerr<<str<<endl;
    }
    return 0;
}
