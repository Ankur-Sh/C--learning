#include<iostream>
using namespace std;
int main(){
    //Array Example
int marks[]={23,45,56,89};
 int Mathmarks[4];
 Mathmarks[0]=324;
 Mathmarks[1]=324;
 Mathmarks[2]=324;
 Mathmarks[3]=324;

 cout<<"These are math marks"<<endl;
 cout<<Mathmarks[0]<<endl;
cout<<Mathmarks[1]<<endl;
cout<<Mathmarks[2]<<endl;
cout<<Mathmarks[3]<<endl;

//You can change the value of an array
marks[2]=233;
cout<<"These are marks"<<endl;
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;
return 0;
}
