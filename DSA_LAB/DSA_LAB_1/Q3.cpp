#include<bits/stdc++.h>
using namespace std;
int addup(int n);
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    if(n>0){
    cout<<addup(n);
    }else{
        cout<<"Enter a positive number";
    }
    return 0;
}
int addup(int n){
    
    if(n==0){
        return 0;
    }
    return n+addup(n-1);
}