#include<iostream>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    while(n--){
        cin>>a;
        int d,x=0;
        while(a){
        d = a%10;
        a = a/10;         
        x = x*10+d;
        }
    cout<<x<<endl;
    }
}