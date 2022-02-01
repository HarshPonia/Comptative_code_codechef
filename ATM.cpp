#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    int amount;
    float balance;
    cout<<"Enter the amount and balance:- ";
    cin>>amount>>balance;
    if(amount%5 == 0){
        if (amount < balance)
        {
           cout << fixed <<setprecision(2) <<balance-amount-0.50;
        }
        else
            cout<<fixed <<setprecision(2)<<balance;
        
    }
    else{
        cout<<balance;
    }

}