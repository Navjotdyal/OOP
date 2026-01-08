#include<bits/stdc++.h>
using namespace std;

// methods are functions that belongs to the class.

// There are two ways to define functions that belongs to a class:

// Inside class definition
// Outside class definition

//
//inside
// class car{
//     public:
//     string brand;
//     string modelname;
//     int modelyear;

//     void start(){ //method defined inside class
//         cout<<"car started"<<endl;
//     }

//     void stop(); //method declaration
// };


//outside
//method defined outside class using scope resolution operator ::

// class car{
//     public:
//     string brand;
//     int model;

//     void start();

// };

// void car::start(){ //method defined outside class
//     cout<<"car started"<<endl;
// }
// int main(){
//     car car1;
//     car1.brand="ford";
//     car1.model=2022;

//     cout<<car1.brand<<endl;
//     cout<<car1.model<<endl;

//     car1.start(); //calling method
// }


//pass value to method just like function using parameters


class car{
    public:
    string brand;
    int model;

    int start(int maxspeed);
};
int  car::start(int maxspeed){
    return maxspeed;
}   

int main(){
    car car1;
    car1.brand="thar";
    car1.model=2021;
    cout<<car1.brand<<endl;
    cout<<car1.model<<endl; 
    cout<<car1.start(180); //passing value to method    
    
}
