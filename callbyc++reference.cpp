#include<iostream>
using namespace std;

//Call by reference using pointers
void swapReferenceVar(int &a,int &b){
    int temp= a;
    a=b;
    b=temp;
}

int main(){
int x=4,y=5;
cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
// swap(x,y); //This will swap a and b using reference variables
swapReferenceVar(x,y);
cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
return 0;
}