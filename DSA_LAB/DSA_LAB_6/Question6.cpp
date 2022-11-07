#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> v(15,vector<int> (15));

class HashTable{
    public:
    int Key;
    HashTable(int key){
        this->Key = key;
        v.clear();
        v.resize(Key, vector<int> (Key,INT_MAX));
    }

    void insert(int n){
        int k = n%Key;
        int i=0;
        while(v[k][i]!=INT_MAX){
            if(i>Key){
                cout<<"This row is full."<<endl;
                break;
            }
            else i++;
        }
        v[k][i] = n;    
    }

    void print(){
        for(int i=0;i<Key;i++){
            for(int j=0;j<Key;j++){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};


int main(){
    HashTable h1(3);
    h1.insert(3);
    h1.insert(6);
    h1.insert(9);
    h1.insert(7);
    h1.insert(10);
    h1.insert(70);
    h1.insert(53);
    h1.insert(77);
    h1.insert(92);
    h1.print();

    return 0;
}