#include <iostream>
#include<bits/stdc++.h>

using namespace std;
map<pair<int,int>,int> m;
class Array2D {         // The class
  public :
    int **arr;
    int row;
    int colume;
    
    void Array2D1(int r, int c)      // Method/function
    {
      this-> row=r;
      this-> colume=c;
      arr = new int*[c];
      for(int i=0;i<r;i++){
          arr[i] = new int[r];
      }
      
	for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            cin>>arr[i][j];
            if(arr[i][j]!=0){
                m[{i,j}] = arr[i][j];
            }
    }
}

  	
    }
    int numRows(){
        return row;
    }
    
    int numCols(){
        return colume;
    }
    
    void scaleby( int value){
    
    for(int i = 0; i < colume; i++){
    for(int j = 0; j < row; j++){
        if(m[{i,j}]!=0){
            m[{i,j}]=m[{i,j}]*value;
        }
            }
        }
    }
    void getitem(int i1,int i2 ){
        if(i1>colume && i2>row){
            cout<<"Enter valid row and colume we can't getitem  "<<endl;
        }else{
        cout<<m[{i1,i2}]<<endl;
        }}    
    
    
    void setitem(int i1,int  i2, int value1){
        if(i1>colume && i2>row){
            cout<<"Enter valid row and colume we can't find setitem  "<<endl;
        }else{
        m[{i1,i2}]=m[{i1,i2}]*value1;
            
        }      
    }
    void listprint(){
    for(auto jp : m){
        cout<<jp.first.first<<" "<<jp.first.second<<" "<<jp.second;
    }}
    
    void arprint(){
        for(int i=0;i<colume;i++){
            for(int j=0;j<row;j++){
                cout<<m[{i,j}];
            }
            cout<<endl;
        }
    }
    void transpose(int **array2){
        for(int i=0;i<row;i++){
            for(int j=0;j<colume;j++){
                if(i==j){
                    array2[i][j]=m[{i,j}];
                }else{
                array2[i][j]=m[{j,i}];}
            }
        }
    }
    void add(int **array2){
        for(int i=0;i<row;i++){
            for(int j=0;j<colume;j++){
                array2[i][j]=m[{i,j}]+array2[i][j];
            }
        }
    }
    void subtract(int **array2){
        for(int i=0;i<row;i++){
            for(int j=0;j<colume;j++){
                array2[i][j]=m[{i,j}]-array2[i][j];
            }
        }
    }
    void multiply(int **array2){
        for(int i=0;i<row;i++){
            for(int j=0;j<colume;j++){
                array2[i][j]=m[{i,j}]*array2[i][j];
            }
        }
    }
};

int main() {
int **array1;
int **array2;
 
 int r,c;
 cin>>r;
 cin>>c;
    array1 = new int*[c];
      for(int i=0;i<r;i++){
          array1[i] = new int[r];
      }
      array2 = new int*[c];
      for(int i=0;i<r;i++){
          array2[i] = new int[r];
      }
  Array2D myObj;     // Create an object of MyClass
  myObj.Array2D1(r,c);  // Call the method
//   int scalar;
//   cin>>scalar;
//   int i1,i2;
//   cin>>i1>>i2;
//   cout<<myObj.numRows()<<endl;
//   cout<<myObj.numCols()<<endl;
//   myObj.getitem(i1-1,i2-1 );
 
//   myObj.setitem(i1-1, i2-1, scalar);
//   myObj.scaleby(scalar);
  
//   myObj.arprint();
  for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            cin>>array2[i][j];
    }}
    // myObj.transpose(array1);
    // for(int i = 0; i < c; i++){
    //     for(int j = 0; j < r; j++){
    //         cout<<array1[i][j];
    // }
    //     cout<<endl;
    // }
  myObj.add(array2);
  for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            cout<<array2[i][j]<<" ";
    }
        cout<<endl;
    }
  myObj.subtract(array2);
  myObj.multiply(array2);
  return 0;
}