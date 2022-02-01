#include<iostream>
using namespace std;
int main(){
    int n,k,c=0,x;
    cin>>n>>k;
    while(n--)
    {
        cin>>x;
        if(x%k==0)
            c++;
    }
    cout<<c;
}