/// this is all about how to handale addtion of two integer of verty verty big

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
        it=0;


        char carry=0;
        char store=0;
        char cal=0;
        bool flag1=false;
        bool flag2=false;

     for(int size1=addition[0].size()-1,size2=addition[1].size()-1;;){

        cal=((((addition[0][size1])-48)+((addition[1][size2]) - 48))+carry);
        ///if(cal>9)
            store=(cal%10)+48;
        ///else
          ///  store=((((*first)-48)+((*second) - 48))+carry)
          temp.push_back(store);

          carry=cal/10;


        if((addition[0].front()==addition[0][size1]) ^ (addition[1].front()==(int)addition[1][size2])){

            if(addition[0].front()==addition[0][size1]){
                size2--;
                if(flag1==false){
                    addition[0].push_back('0');
                    swap(addition[0].front(),addition[0].back());
                    flag1=true;
                }
            }

            else{

                size1--;
                if(flag2==false){
                    addition[1].push_back('0');
                    swap(addition[1].front(),addition[1].back());
                    flag2=true;
                }

            }
        }
        else if((addition[0].front()==addition[0][size1]) && (addition[1].front()==(int)addition[1][size2]))
            break;
        else
        {
            size1--;
            size2--;
        }


     }

     if(flag1==true && flag2==false){
        swap(addition[0].front(),addition[0].back());
        addition[0].pop_back();

     }
     if(flag2==true && flag1==false){
        swap(addition[1].front(),addition[1].back());
        addition[1].pop_back();
     }
    if(flag2==true && flag1==true){
        swap(addition[0].front(),addition[0].back());
        addition[0].pop_back();
        swap(addition[1].front(),addition[1].back());
        addition[1].pop_back();
     }

     temp.push_back((carry+'0'));
     while(temp.back()=='0'){
        temp.pop_back();
     }

     reverse(temp.begin(),temp.end());

        addition.push_back(temp);
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
