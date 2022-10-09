#include <bits/stdc++.h>
using namespace std;

int binarySearch(int input[], int n, int val)
{
    //Write your code here
    int start = 0, end = n-1;
    int temp;
    while(start<=end){
        int mid = (start + end)/2;
        temp = mid;
        if(val == input[mid]){
            return mid;
        }
        else if(val > input[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    
    if(val != input[temp] && start == end){
        return start+1;
    }
    else if(val > input[temp]){
        return temp+1;
    }
    else {
        return temp;
    }
}


void InsertionSort(int* input, int size){
//	int *temp = new int[10];
	for(int i = 0; i < size-1; i++){
		int current = input[i+1];
		
		int a[i+1], k = 0;
		for(int j = 0; j < i+1; j++){
			a[j] = input[k++];
		}
		
		int locatedindex = binarySearch(a, i+1, current);
		
		// shift elements forward
        for (int j = i+1; j > locatedindex; j--){
//        	cout << input[j] << " ";
         	input[j] = input[j - 1];
//         	cout << input
 		}
         // insert x at pos
        input[locatedindex] = current;
    }	   
}

int main(){
	
	int a[] = {17, 18, -2, 6, 5, 4, 3};
	
	InsertionSort(a, 7);
	
	for(int i = 0 ; i < 7; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	
	return 0;
}