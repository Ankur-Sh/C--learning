#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,Count=0,max=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(max<arr[i]){
        max=arr[i];
    }
    }
    for(int i=0;i<n;i++){
        if(max==arr[i]){
            Count++;
        }
    }
    cout<<Count;
return 0;
}
