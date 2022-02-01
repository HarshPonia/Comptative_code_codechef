#include<iostream>
using namespace std;

int main(){
    int x,a;
    cin>>x;
    while (x--)
    {
        cin>>a;
        int s = 0,rem;
        while (a>0)  
        {
            rem = a%10;
            s = rem+s;
            a = a/10;
        }
        cout<<s<<endl;
    }
    
}