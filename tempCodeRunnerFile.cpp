#include<iostream>
using namespace std;
int main(){
    int n,s =0;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
        s = s+arr[i];
    }
    if(s%n == 0){
        cout<<s/n;
    }
    else{
        cout<<-1;
    }
}