/// this is all about how to handale addtion of two integer of verty verty big

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{

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
    temp.push_back(0);
    addition.push_back(temp);
    temp.clear();
    it=0;


    char carry=0;
    char store=0;
    char cal=0;


 vector<char>::reverse_iterator first=addition[0].rbegin();
 vector<char>::reverse_iterator second=addition[1].rbegin();
 for(;;){
    if((first==addition[0].rend()) && (second==addition[1].rend()))
        break;
    cal=((((*first)-48)+((*second) - 48))+carry);
    ///if(cal>9)
        store=(cal%10)+48;
    ///else
      ///  store=((((*first)-48)+((*second) - 48))+carry)
      temp.push_back(store);

      carry=cal/10;


    if((first==addition[0].rend()) ^ (second==addition[1].rend())){

        if(first==addition[0].rend()){
            first=addition[3].rend();
            second++;
        }
        else{
            first++;
           second=addition[3].rend();
        }
    }
    else
    {

        first++;
        second++;
    }


 }
 temp.push_back((carry+48));
 reverse(temp.begin(),temp.end());

    addition.push_back(temp);
    cout<<endl;
    for(int i=0;i<(int)addition[2].size();i++)
    {
        cout<<addition[2][i];
    }

    return 0;
}
