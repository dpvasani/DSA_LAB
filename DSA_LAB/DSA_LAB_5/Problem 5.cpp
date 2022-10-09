#include <bits/stdc++.h>
using namespace std;

void MergetwoSortedArray(int* input, int si, int mid, int ei){
	int size = ei - si + 1;
	int i = si; 
	int j = mid +1;
	
	int *newarr = new int[size];
	int k = 0;
	while(i <= mid && j <= ei){
		if(input[i] > input[j]){
			newarr[k++] = input[j++];
		}
		else{
			newarr[k++] = input[i++];
		}
	}
	
	while(i <= mid){
		newarr[k++] = input[i++];
	}
	while(j <= ei){
		newarr[k++] = input[j++];
	}
	
	
	int m = 0;
	for(int i = si; i <= ei; i++){
		input[i] = newarr[m++];
	}
	delete [] newarr;
}

void merge(int *input, int si, int ei){
	if(si >= ei){
		return;
	}
	
	int mid = (si+ei)/2;
    merge(input, si, mid);
    merge(input, mid+1, ei);
    
    MergetwoSortedArray(input, si, mid, ei);
}

void MergeSort(int *input, int size){
	int ei = size-1;
	merge(input, 0, ei);
}

int main(){
	int a[] = {17, 18, -2, 6, 5, 4, 3};
	
	int size = sizeof(a)/sizeof(a[0]);
	
	MergeSort(a, size);
	
	for(int i = 0; i < 7; i++){
		cout << a[i] << " ";
	}
	cout << endl;
	
	return 0;
}