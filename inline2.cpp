#include<iostream>
using namespace std;
float moneyReceived(int currentMoney, float factor=1.04){//default argument is putted later
    return currentMoney*factor;
}
int main(){
int money=100000;
cout<<"If you have "<<money<<" Rs in your bank acoount, you will recieve "<<moneyReceived(money)<<" Rs after 1 year.";
cout<<"For VIP: If you have "<<money<<" Rs in your bank acoount, you will recieve "<<moneyReceived(money,1.1)<<" Rs after 1 year.";
return 0;
}