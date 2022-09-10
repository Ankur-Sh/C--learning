#include<iostream>
using namespace std;
//This will not swap a and b
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}//Call by reference using pointers
void swapPointer(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

//Call by reference using pointers
void swapPointer(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//Call by reference using C++ reference variable
void swapReferenceVar(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
int x=4,y=5;
cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
// swap(x,y); //This will swap a and b using pointers reference
swapPointer(&x,&y);
cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
return 0;
}