//create class
#include<bits/stdc++.h>
using namespace std;

class car{
    public: //access specifier
    string brand; // attribute
    string modelname;
    int modelyear;
};
//end of class
// The class keyword is used to create a class called MyClass.
// The public keyword is an access specifier, which specifies that members (attributes and methods) of the class are accessible from outside the class. You will learn more about access specifiers later.
// Inside the class, there is an integer variable myNum and a string variable myString. When variables are declared within a class, they are called attributes.
// At last, end the class definition with a semicolon ;.


//create object
 int main(){
     car car1; // create an object of car class

     car1.brand="tata";//accessing attributes and assigning values
     car1.modelname="nexon";
     car1.modelyear=2020;
     cout<<car1.brand<<endl;
     cout<<car1.modelname<<endl;
     cout<<car1.modelyear;
 }