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
public:
    Divya(string NAME ,int AGE,int SPENDINGS){  /*constructor*/
        name=NAME;
        age=AGE;
        spendings=SPENDINGS;
    }
    
};
int main()
{
    
    Divya divya1= Divya("gopi",19,5000);
    divya1.introducing();
    Divya divya2= Divya("Rajeswari",40,4000);
    divya2.introducing();
    
    

   
}
