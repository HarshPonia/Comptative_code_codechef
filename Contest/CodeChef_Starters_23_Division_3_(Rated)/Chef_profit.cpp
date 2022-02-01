# include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int x,y,z;
        cin>>x;
        cin>>y;
        cin>>z;
        int ans = (x*z)-(x*y);
        cout<<ans<<endl;
    }
}