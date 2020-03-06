#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

namespace algo{
    int ColCount(int Vertex,map<int,map<int,bool> > &matA){
       int countt=0;
        for(map<int,bool>::iterator it=matA[Vertex].begin();it!=matA[Vertex].end();it++){
            if((it->second))
                countt++;
        }
        return countt;
    }

    int Degree(int Vertex,map<int,map<int,bool> > &matA){

        return ColCount(Vertex,matA);
    }

    void print(map<int,map<int,bool>>  &p){
        for(map<int,map<int,bool>>::iterator matA=p.begin();matA!=p.end();matA++){
            for(map<int,bool>::iterator matB=(matA->second).begin();matB!=(matA->second).end();matB++){
                cout<<"matAdj["<<matA->first<<"]["<<matB->first<<"] = "<<matB->second<<"\t";
            }
            cout<<endl;
        }
    }

    vector<pair<int,int>> neighbour(int Vertex,map<int,map<int,bool>> &matA){
        pair<int,int> temp;
        vector<pair<int,int>> Vtemp;
        for(map<int,bool>::iterator it=matA[Vertex].begin();it!=matA[Vertex].end();it++){

            if(it->second){

               temp=make_pair(Vertex,it->first);
            }
            Vtemp.push_back(temp);

        }
        return Vtemp;
    }


}

int main()
{

    map<int,map<int,bool>> matAdj;
    map<int,bool> temp;
    int vertexNo;
    int vertex,vertex2;
    bool check;
    cout<<"Enter Number of vertices : ";
    cin>>vertexNo;
    for(int j=0;j<vertexNo;j++){
        cout<<"Enter vertex : ";
        cin>>vertex;
        for(int i=0;i<vertexNo;i++){
            cout<<"Enter vertex(Column) : ";
            cin>>vertex2;
            cout<<"is edge? : ";
            cin>>check;
            temp[vertex2]=check;
        }
    matAdj[vertex]=temp;
    temp.clear();
    }
    cout<<endl;
    algo::print(matAdj);
    cout<<"Degree of 2 = "<<algo::Degree(2,matAdj)<<endl;
    return 0;
}
