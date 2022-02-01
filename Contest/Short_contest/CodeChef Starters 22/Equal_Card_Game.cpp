#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    while(n>0){
        cin>>x;
        int d = 52%x;
        cout<<d<<endl;
        n--;
    }
}