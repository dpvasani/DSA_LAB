#include<bits/stdc++.h>
using namespace std;

int* replatind(int * arr,int n,int a, int b){
    for (int i = 0; i < n; i++)
    {
        if (i==a-1)
        {
            arr[i] = b;
        }
    }
    return arr;
    
}
int main()
{
    int n;
    cout << "ENTER THE LENGTH OF ARRAY:";
    cin >> n;
    int arr[n];
    cout << "ENTER ARRAY ELEMENTS SEPERATED BY SPACE:";
    for (int i = 0; i < n; i++)
    {
       cin >> arr[i]; 
    }
    int a;
    cout << "ENTER THE POSITION OF REPLACEMENT:";
    cin >> a;
    int b;
    cout << "ENTER THE NEW DIGIT:";
    cin >> b;
    int* ans = replatind(arr,n,a,b);
    
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}