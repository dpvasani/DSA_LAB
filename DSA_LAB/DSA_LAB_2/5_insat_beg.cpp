#include<bits/stdc++.h>
using namespace std;
int* insatbeg(int *arr1,int b,int n,int *arr2)
{

    for (int i=1;i<n+1;i++)
    {
        arr2[i] = arr1[i-1];
    }
    arr2[0] = b;
    return arr2;
}

int main()
{
    int n;
    cout << "ENTER THE LENGTH OF ARRAY:" ;
    cin >> n;
    int arr[n];
    int arrr[n+1];
    cout << "ENTER ARRAY ELEMENTS SEPERATED BY SPACE:";
   
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int b;
    cout << "ENTER THE ELEMENT TO INSERT AT THE BEGINNING:";
    cin >> b;
    int* ans = insatbeg(arr,b,n,arrr);
    for (int i=0;i<n+1;i++)
    {
    cout <<  ans[i] << " ";
    }
    return 0;
}