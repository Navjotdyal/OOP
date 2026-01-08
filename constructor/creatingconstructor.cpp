// A constructor is a special method that is automatically called when an object of a class is created.

// To create a constructor, use the same name as the class, followed by parentheses ():
#include<bits/stdc++.h>
using namespace std;    

class car{
    public:

    car(){// declared constructor
        cout<<"speed of car is 100km/hr"<<endl;

}
};
int main(){
    car car1; //object created, constructor is called automatically
}
// Constructor Rules
// The constructor has the same name as the class.
// It has no return type (not even void).
// It is usually declared public.
// It is automatically called when an object is created.