#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=2)cout<<"NO"<<endl;
    if(n%2!=0){
        cout<<"YES"<<endl;
    }else{
        if(n/2%2!=0)
    cout<<"NO"<<endl;}
    cout<<"YES"<<endl;
}