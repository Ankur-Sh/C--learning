#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<int> c(n);
    for(int i=0;i<n;i++){
        c[i]=a[i]+b[i];
        cout<<c[i]<<" ";
    }
    cout<<endl;
    vector<int> d(n);
    for(int i=0;i<n;i++){
        d[i]=a[i]-b[i];
        cout<<d[i]<<" ";
    }
   
return 0;
}