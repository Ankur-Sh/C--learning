#include<iostream>
using namespace std;
int main(){
    int array[4]={10,20,30,40};
    cout<<array[3]<<endl;
    /*
int array[4];

array[0]=10;
array[1]=20;
array[2]=10;
array[3]=10;*/
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];    
}
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";    
}

return 0;
}