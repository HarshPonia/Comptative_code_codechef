#include<iostream>
using namespace std;
// void check(int a[], int b[]){
// //    string s =  a[0]>b[0]?"DRAGON\n":a[0]==b[0]?(a[1]>b[1]?"DRAGON\n":(a[1]==b[1]?"TIE\n":"SLOTH\n")):"SLOTH\n";
// //     cout<<s<<endl;
//     // if(a[0]>b[0]){cout<<"DRAGON"<<endl;}
//     // else if(a[0]==b[0]){
//     //     if(a[1]>b[1]){
//     //         cout<<"DRAGON"<<endl;
//     //     }
//     //     else if(a[1]==b[1]){
//     //         if(a[2]>b[2]){cout<<"DRAGON "<<endl;}
//     //         else if(a[2]==b[2]){cout<<"TIE "<<endl;}
//     //         else{cout<<"SLOTH"<<endl;}
//     //     }
//     //     else{cout<<"SLOTH"<<endl;}
//     // }
//     // else{cout<<"SLOTH"<<endl;}

// }
// int main(){
//     int a[3],b[3],n,sum1=0,sum2 = 0;
//     cout<<"Enter the number of test cases: ";
//     cin>>n;
//     while(n--){
//         for (int i =0;i<3;i++){
//             cin>>a[i];
//             sum1 = sum1+a[i];
//         }
//         for (int i =0;i<3;i++){
//             cin>>b[i];
//             sum2 = sum2+b[i];
//         }
//         if(sum1>sum2){
//             cout<<"DRAGON\n";
//         }
//         else if(sum1<sum2){
//             cout<<"SLOTH\n";
//         }
//         else{
//             if(a[0]>b[0]){cout<<"DRAGON"<<endl;}
//     else if(a[0]==b[0]){
//         if(a[1]>b[1]){
//             cout<<"DRAGON"<<endl;
//         }
//         else if(a[1]==b[1]){
//             if(a[2]>b[2]){cout<<"DRAGON "<<endl;}
//             else if(a[2]==b[2]){cout<<"TIE "<<endl;}
//             else{cout<<"SLOTH"<<endl;}
//         }
//         else{cout<<"SLOTH"<<endl;}
//     }
//     else{cout<<"SLOTH"<<endl;}
//         }

//     }
    
// }


int main(){
    int DSA1,TOC1,DM1,DSA2,TOC2,DM2,s1=0,s2=0;
    int n;
    cin>>n;
    while(n--){
        cin>>DSA1>>TOC1>>DM1;
        cin>>DSA2>>TOC2>>DM2;
        s1 = DSA1+TOC1+DM1;
        s2 = DSA2+TOC2+DM2;
        if(s1>s2){
            cout<<"DRAGON "<<endl;
        }
        else if(s1<s2){
            cout<<"SLOTH "<<endl;
        }
        else{
            if(DSA1>DSA2){
                cout<<"DRAGON "<<endl;
            }
            else if(DSA1==DSA2){
                if(TOC1>TOC2){
                    cout<<"DRAGON "<<endl;
                }
                else if (TOC1==TOC2)
                {       
                    if(DM1>DM2){
                        cout<<"DRAGON "<<endl;
                    }
                    else if(DM1==DM2)
                    { 
                        cout<<"TIE "<<endl;
                    }
                    else{cout<<"SLOTH "<<endl;}
                }
                else{cout<<"SLOTH "<<endl;}
                
            }
            else{cout<<"SLOTH "<<endl;}
        }
    }
}



