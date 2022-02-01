#include<iostream>
using namespace std;
int main(){
    int n,a,c;
    cin>>n;
    while(n>0){
        cin>>a;
        c =0;
        while(a>0){
            a = a/2;
            c++;
            
        }
        cout<<c-1<<endl;
        n--;
    }
}


// #include<iostream>
// using namespace std;
// int main()
// {
//     int t,l;
//     long int k;
//     cin >> t;
//     for(int i=0;i<t;i++)
//     {
//         cin >> k;
//         long int arr[k],array[k];
//         l=0;
//         for(int j=k/2;j>0;j--)
//         {
//             if(j%2==0)
//             {
//                 arr[l]=j;
//                 l++;
//             }
//         }
//         arr[l]=1;
//         int s=0;
//         for(int j=0;j<=l;j++)
//         {
//             for(int m=0;m<=j;m++)
//             {
//                 s = s+arr[m];
//             }
//             array[j]=s;
//             s=0;
//         }
//         int c=0;
//         for(int j=0;j<=l;j++)
//         {
//             if(arr[j]+array[j]==k)
//             {
//                 c++;
//             }
//         }
//         cout << c << "\n";
//     }
// }