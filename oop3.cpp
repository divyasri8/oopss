/*encapsulation*/
#include <iostream>
using namespace std;
#include<string>

class Divya{
private:
    string name;    /*encapsulated data ,other classes cannot invoke the data*/
    string vlg;
    int age;
    int spendings;
public:
    void setname(string NAME){  //setter           /*accessing encapsulated data */
        name=NAME;
    }
    string getname(){   //getter
        return name;
    }
    void setage(int AGE){
         age=AGE ;
    }
    int getage(){
        return age;
    }
    void setspendings(int SPENDINGS){
        spendings=SPENDINGS;
    }
    int getspendings(){
        return spendings;
    }
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
    
    
    /*divya1.introducing();*/
    Divya divya2= Divya("Rajeswari",40,4000);
    divya2.introducing();
    /*divya2.setage(19);*/
    
    
    cout<<divya2.getname()<<"-"<<divya2.getage()<<endl;
    

   
}
