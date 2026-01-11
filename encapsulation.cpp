//encapsulation is the type of oop it is means binding data and method together in single class 
//it provide control over accessbility and protect the internal data form extrnal modification 

#include<bits/stdc++.h>
using namespace std;

class encapsulation{
    private:
    int age;

    public:
    void setage(int a){
        age=a;
        cout<<age<<endl;
    }
};

int main(){
encapsulation obj;
obj.setage(25);
}


// foraccessing the private data we use function in public access specifier 
//why we use encapsulation?
//1. it is used to protect the internal data from external modification 
//2. it provide control over accessbility
//3. it helps to maintain data integrity by preventing unauthorized access  
//4. it improve code maintainability by keeping data and method together in single class