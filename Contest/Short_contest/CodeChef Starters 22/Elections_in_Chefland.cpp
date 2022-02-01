#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A,B,C;
    while(n--){
        cin>>A>>B>>C;
        if(A>50)
            cout<<"A "<<endl;
        else if(B>50)
            cout<<"B "<<endl;
        else if(C>50)
            cout<<"C "<<endl;
        else 
            cout<<"NOTA "<<endl;
    }
}