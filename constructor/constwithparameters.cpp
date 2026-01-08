// Constructors can also take parameters (just like regular functions), which can be useful for setting initial values for attributes.

// The following class have brand, model and year attributes, and a constructor with different parameters. Inside the constructor we set the attributes equal to the constructor parameters (brand=x, etc).

// When we call the constructor (by creating an object of the class), we pass parameters to the constructor, which will set the value of the corresponding attributes to the same:


#include<bits/stdc++.h>
using namespace std;        

class car{
    public:
    string brand;
    int model;

    car(string x,int y){ //constructor with parameters
        brand=x;
        model=y;
    }
};

int main(){
    car car1("Toyota", 2020); //object created and values passed to constructor // with different val
    cout<<car1.brand<<endl;
    cout<<car1.model;
}

// Think of it like this: When you order a pizza (object), the constructor is the chef who adds the sauce, cheese, and toppings before it gets to you - you don't have to do it yourself!