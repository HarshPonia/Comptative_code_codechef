#include<iostream>
using namespace std;
int num(int n){
    int c = 0;
    for(int i =1;i<=n;i++)
    {
        if(n%i == 0){
            c++;

        }
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    cout<<num(n);
    cout<<"\n";
    for(int i =1;i<=n;i++){
        if(n%i == 0){
            cout<<i;
            cout<<" ";
        }
        
    }
}