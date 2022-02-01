#include<iostream>
using namespace std;
int four(int t){
    int c =0,d;
    while(t){
            d = t%10;
            t = t/10;
            if(d == 4){
                c = c+1; 
            }
        }
        return c;
}
int main()
{
    int n,t;
        cin>>n;
    while(n--)
    {
        cin>>t;
        cout<<four(t)<<endl;

    }

    
}
