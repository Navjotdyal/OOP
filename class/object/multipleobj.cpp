#include<bits/stdc++.h>
using namespace std;

class car{
    public:
    string brand;
    string modelname;
    int modelofyear;
}; //end of class

int main(){
    car car1;//object 1
    car car2; //object 2

    //object 1 details
    car1.brand="maruti";
    car1.modelname="swift";
    car1.modelofyear=2011;

    //object 2 details
    car2.brand="mahindra";
    car2.modelname="thar";
    car2.modelofyear=2021;

    //print obj 1details
    cout<<"car1 details:"<<endl;
    cout<<car1.brand<<endl<<car1.modelname<<endl<<car1.modelofyear<<endl;
 
    //print obj 2 details
    cout<<"car2 details:"<<endl;
    cout<<car2.brand<<endl<<car2.modelname<<endl<<car2.modelofyear<<endl;


}