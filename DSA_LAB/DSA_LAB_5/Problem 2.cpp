#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int *input, int size){
	for(int i = 0; i < size-1; i++){
		int min = input[i], minniindex = i;
		for(int j = i+1; j < size; j++){
			if(min > input[j]){
				min = input[j];
				minniindex = j;
			}
		}
		// swap
		int temp = input[i];
		input[i] = input[minniindex];
		input[minniindex] = temp;
	}
}

int main(){
	int a[] = {6, 5, 4, 3, 2, 1};
	
	
	
	SelectionSort(a, 6);
	
	for(int i = 0; i < 6; i++){
		cout << a[i] << " ";
	}
	return 0;
}