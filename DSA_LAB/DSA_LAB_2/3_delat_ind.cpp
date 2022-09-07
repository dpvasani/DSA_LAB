#include<bits/stdc++.h>
using namespace std;
int* delatind(int *arr1,int a,int n,int *arr2)
{

    for (int i = 0; i < n ; i++)
    {
        if (i<a-1)
        {
            arr2[i] = arr1[i];
        }
        else if (i>=a-1)
        {
            arr2[i] = arr1[i+1];
        }
    }
    return arr2;
}

int main()
{
    int n;
    cout << "ENTER THE LENGTH OF ARRAY:" ;
    cin >> n;
    int arr[n];
    int arrr[n-1];
    cout << "ENTER ARRAY ELEMENTS SEPERATED BY SPACE:";
   
    for (int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int a;
    cout << "ENTER SPECIFIED POSITION TO DELETE:";
    cin >> a;
    int* ans = delatind(arr,a,n,arrr);
    for (int i=0;i<n-1;i++)
    {
    cout <<  ans[i] << " ";
    }
    return 0;
}