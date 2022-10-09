#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Partition(int input[], int si, int ei){
    
    int c = 0;
    int pivotvalue = input[si];
    for(int i = si+1; i <= ei; i++){
        if(pivotvalue >= input[i]){
            c++;
        }
    }
    
    
    int pivotindex = si+c;
    int temp = input[si];
    input[si] = input[pivotindex];
    input[pivotindex] = temp;
    
    
    int i = si, j = ei;
    
    while(i < pivotindex && j > pivotindex){
        if(input[pivotindex] >= input[i]){
            i++;
        }
        else if(input[pivotindex] < input[j]){
            j--;
        }
        else{
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
            // swap(input[i], input[j]);
            i++;
            j--;
        }
    }
    return pivotindex;
}

int Partition_random(int input[], int si, int ei){
    // Generate a random number in between
    // low .. high
    srand(time(NULL));
    int random = si + rand() % (ei - si);
  
    // Swap A[random] with A[high]
    swap(input[random], input[ei]);
  
    return Partition(input, si, ei);
}

void quick(int input[], int si, int ei){
    if(si >= ei){
        return;
    }
    
    int pi = Partition_random(input, si, ei);
    
    quick(input, si, pi-1);
    quick(input, pi+1, ei);   
}

void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    if(size<=1){
           return;
    }
    
    int si = 0, ei = size-1;
    
    quick(input, si, ei);
    
    

}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


