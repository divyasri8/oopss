#include <iostream>
using namespace std;
#include<string>

class Divya{
public:
    string name;
    string vlg;
    int age;
    int spendings;
    
    void introducing(){
        cout<<"NAME-"<<name<<endl;
        cout<<"AGE-"<<age<<endl;
        cout<<"SPENDINGS-"<<spendings<<endl;
        
    }
    
};
int main()
{
    Divya divya1;
    divya1.name = "gopi";
    divya1.age = 19;
    divya1.spendings= 5000;
    divya1.introducing();
    

   
}
