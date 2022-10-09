#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    bool flag = true;
    
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[i+1]){
            flag = false;
        }
    }
    
    if(!flag){
        for(int j = 0; j < n-1; j++){
     for(int i = 0; i < n - 1 - j ;i++){
         if(arr[i] > arr[i+1]){
             swap(arr[i], arr[i+1]);
         }
     }
  }
    }
    else{
        return;
    }
    
 
}

int main(){
	
	int a[] = {17, 18, -2, 6, 5, 4, 3};
	
	int size = sizeof(a)/sizeof(a[0]);
	
	bubbleSort(a, size);
	
	for(int i = 0; i < 7; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	
	return 0;
}
