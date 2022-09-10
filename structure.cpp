#include<iostream>
using namespace std;

//typedef is used to replace writting again and again struct employee with ep or whatever you want
typedef struct employee
{
    /* data */
    int eId;//4
    char favChar;//1
    float salary;//4
} ep;
//allocate 9 bytes

int main(){
ep ankit;
ankit.eId=1;
ankit.favChar='c';
ankit.salary=122344;
cout<<"The value is "<<ankit.eId<<endl;
cout<<"The value is "<<ankit.favChar<<endl;
cout<<"The value is "<<ankit.salary<<endl;
return 0;
}