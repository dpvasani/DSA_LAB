/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int Partition(int input[], int si, int ei){
    int c = 0;
    
    int mid = (si+ei)/2;
    
    int pivotvalue = input[mid];
    
    for(int i = si; i <= ei; i++){
        if(pivotvalue >= input[i]){
            c++;
        }
    }
    
    c--;
    
    int pivotindex = si+c;
    swap(input[mid], input[pivotindex]);
    
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

void quick(int input[], int si, int ei){
    if(si >= ei){
        return;
    }
    
    int pi = Partition(input, si, ei);
    
    quick(input, si, pi-1);
    quick(input, pi+1, ei);   
}

void quickSort(int input[], int size) {
  
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
