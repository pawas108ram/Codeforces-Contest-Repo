#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;








int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        k--;
        if(n%2==0){
            cout<<1+(k)%n<<endl;
        }
        else{
            long long ins=(k)/((n-1)/2);
            cout<<1+(k+ins)%n<<endl;
        }
    }
}