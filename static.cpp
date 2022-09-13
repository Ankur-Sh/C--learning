#include<iostream>
using namespace std;
class Employee
{
    int id;
    static int count;
public:
    void setData(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
    }
    static void getCount(void){
        //cout<<id;    -->  Throws an error since id is not static
        cout<<"The value of count is "<<count<<endl;
    }
};
    //Count is the static data member of class Employee
    int Employee::count=1000;    //Default value is 0

int main(){
    Employee ankur,rachit,govind;
    ankur.setData();
     ankur.getData();
     Employee::getCount;

    rachit.setData();
     rachit.getData();
     Employee::getCount;
    
    govind.setData();
    govind.getData();
     Employee::getCount;
return 0;
}