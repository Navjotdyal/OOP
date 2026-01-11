 #include<bits/stdc++.h>
using namespace std;

class privateAccess{
    private: // access specifier which means that they cannot be accessed and modified from outside the code:
    int salary;

    public:
    //for accessing the private data we use function in public access specifie)
    void setsalary(int s){
        salary=s;
        cout<<salary<<endl;
    }
    string name;
};

int main(){
    privateAccess obj; // object of class
    obj.name="john";
    cout<<obj.name<<endl;
    obj.setsalary(5000);
}