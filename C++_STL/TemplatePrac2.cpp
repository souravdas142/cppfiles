#include<iostream>
using namespace std;
template <typename t>
class abc{
    t a;
public:
    void set(){
        cin>>a;
    }
    t print();
};

template <typename t>
t abc<t>:: print(){
    return a;
}




int main()
{

    abc<int> d;
    d.set();
    cout<<endl<<endl<<d.print()<<endl;

        abc<string> e;
    e.set();
    cout<<endl<<endl<<e.print()<<endl;
    return 0;
}
