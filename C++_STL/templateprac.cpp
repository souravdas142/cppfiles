#include<iostream>
using namespace std;
template <typename gen,typename genb=int>
gen print(gen a,gen b,genb c){

   /// cout<<"genb = "<<genb<<endl;
    ///return a+b+genb;
    return a+b+c;
}
double print(double a,double b){

    return a*b;
}
template <typename gen>
void print(gen a){

    cout<<a<<endl;
}
int main(){
   /// string a="hello",b=" valo";
   double a=5.964,b=4.964;
   double c=7.5698;
    cout<<"Number : "<<print(a,b,c)<<endl;
    cout<<"Number : "<<print(5.9,2.6)<<endl;
    print("hello");
    return 0;
}
