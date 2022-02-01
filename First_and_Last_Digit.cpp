// #include<iostream>
// using namespace std;

// int main(){
//     int x,a,b,d;
//     cin>>x;
//     while (x--)
//     {
//         cin>>a;
//         b =a;
        
//         cout<<d+b%10;
        
//     }
    
// }


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int d=0,t;
    long int n,z;
    cin >> t;
    for(int i=0;i<t;i++)
    {
       
        cin >> n;
        z=n;
        while(z>0)
        {
            z=z/10;
            d++;
        }
        cout <<n%10+(int)(n/pow(10,d-1)) << "\n";
        d=0;
    }
}