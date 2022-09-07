#include<bits/stdc++.h>
using namespace std;

int srch(int *arr, int a,int b)
{
    
    for (int i = 0; i < b; i++)
    {
        if (arr[i] == a) return i+1;
    }
    return -1;
}


int main()
{
    int n;
    cout << "ENTER THE LENGTH OF ARRAY:" ;
    cin >> n;
    int arr[n];
    cout << "ENTER ARRAY ELEMENTS SEPERATED BY SPACE:";
   
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
     int a;
    cout << "ENTER THE ARRAY ELEMENT WHOSE POSITION IS REQUIRED:";
    cin >> a;
    cout<< srch(arr,a,n) << endl;
    return 0;
}