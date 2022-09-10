#include<iostream>
using namespace std;

//Union is used in giving one data type at a time
union money
{
    /* data */
    int rice;//4
    char car;//1
    float pounds;//4
} ep;
//Since we need 1 at a time so it will allocate max memory of the datatype i.e. 4 byte While Structure is using 9 bytes for same. 

int main(){
union money m1;
m1.rice=34;
m1.car='c';
m1.pounds=34;
//We can use union for allocating one type of data from 3 of them
//We only get the last command right answer since the memory is shared
cout<<m1.pounds<<endl;
return 0;
}