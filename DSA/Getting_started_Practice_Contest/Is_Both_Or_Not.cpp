#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%5 == 0){
        if(n%11 == 0){
            cout<<"BOTH "<<endl;
        }
        else{
            cout<<"ONE "<<endl;
        }
    
    }
    else if(n%11 == 0){
        cout<<"ONE "<<endl;
    }
    else 
    {       
        cout<<"NONE "<<endl;
    }
        
}