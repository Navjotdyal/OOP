// Constructor Overloading
// In C++, you can have more than one constructor in the same class. This is called constructor overloading.

// Each constructor must have a different number or type of parameters, so the compiler knows which one to use when you create an object.

// Why Use Constructor Overloading?
// To give flexibility when creating objects
// To set default or custom values
// To reduce repetitive code
 
#include <bits/stdc++.h>
using namespace std;

class car{
    public:
    string brand;
    int model;
    car(){  // constructor 1
     brand="unkown";
     model="unkown";
}
 car(string x,int y){ // constructor 2
     brand=x;
     model=y;
 
    }

};
int main(){
 car car1;
 car car2("jeep",2021);
cout<<car1.brand<<endl;
cout<<car2.brand<<endl;

}
