#include<iostream>
using namespace std;
//reduce time increase space
//not used in recursion,static variables
inline int product(int a, int b){
  //  static int c=0;//This runs only once
  //  c=c+1;//Next time the function is run, the value of c will be retained
  //  return a*b+c;
  return a*b;
}
int main(){
    int a ,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
return 0;
}