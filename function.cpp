#include<iostream>
using namespace std;

int sum(int a,int b){
    //a and b are formal parameters
    int c=a+b;
    return c;
}
void g(){
    cout<<"Hi"<<endl;
}

int main(){
int num1,num2;
//num1,num2 are actual parameters
cout<<"Enter first number:"<<endl;
cin>>num1;
cout<<"Enter second number:"<<endl;
cin>>num2;
cout<<"The sum is:"<<sum(num1,num2)<<endl;
g();
return 0;
}