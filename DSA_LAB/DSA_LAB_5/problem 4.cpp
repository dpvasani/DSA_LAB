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


void SelectionSort(int *input, int size){
	for(int i = 0; i < size-1; i++){
		int min = input[i], minindex = i;
		for(int j = i+1; j < size; j++){
			if(min > input[j]){
				min = input[j];
				minindex = j;
			}
		}
		// swap
		int temp = input[i];
		input[i] = input[minindex];
		input[minindex] = temp;
	}
}


int main(){
	int a[100000];
	int j = 0;
	for(int i = 100000; i >= 0; i--){
		a[j++] = i;
	}
	
	int size = sizeof(a)/sizeof(a[0]);
	
	{
	time_t start, end;
	time(&start);
	ios_base::sync_with_stdio(false);
	
	SelectionSort(a, 7);
	time(&end);
	
	double time_taken = double(end-start);
	
	cout << "Time taken by Selection sort is : "<< fixed << time_taken << setprecision(5);
	cout << " sec " << endl;}
	int a1[100000];
	int jj = 0;
	for(int i = 100000; i >= 0; i--){
		a[jj++] = i;
	}
	int size1 = sizeof(a1)/sizeof(a1[0]);
	
	{
	time_t start, end;
	time(&start);
	ios_base::sync_with_stdio(false);
	
	InsertionSort(a, 7);
	time(&end);
	
	double time_taken = double(end-start);
	
	cout << "Time taken by Insertion sort is : "<< fixed << time_taken << setprecision(5);
	cout << " sec " << endl;}
	
	
	
	return 0;
	
}