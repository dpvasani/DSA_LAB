#include<bits/stdc++.h>
using namespace std;
int prodArray(int arr[],int size){
    
    if(size==1){
        return arr[0];
    }
    int a[size-1];
    
    
    return prodArray(arr,size-1)*arr[size-1];
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<prodArray(arr,size);
    return 0;
}
