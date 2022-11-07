#include<bits/stdc++.h>
#define here cout<<"Here"<<endl 
using namespace std;
vector<int> v(15,INT_MAX);


class HashTable{
    public:
    int Key;
    HashTable(int key){
        this->Key = key;
        v.clear();
        v.resize(Key,INT_MAX);
    }

    bool check(int n){
        int key = Key;
        int k = n%key;
        if(v[k]==n){
            return true;
        }
        else{
            int tempK = k;
            while(v[++k]!=INT_MAX){
                if(k==key) k=0;
                if(k==tempK) return false;
                if(v[k]==n) return true;
            }
            return false;
        }

        return false;
    }

    void insert(int n){
        bool flag = false;
        int k = n%Key;
        if(v[k]==INT_MAX){
            v[k]=n;
        }
        else{
            int tempK = k;
            while(v[++k]!=INT_MAX){
                if(k==Key) k=0;
                if(k==tempK){
                    flag = true;
                    cout<<"Hash Table Full";
                    break;
                }
            }
            if(!flag) v[k] = n;
        }
        if(flag){
            cout<<"Table Full"<<endl;
            return;
        }        
    }
    
};



int main(){
   
    HashTable h1(17);
    h1.insert(133);
    h1.insert(88);
    h1.insert(92);
    h1.insert(221);
    h1.insert(174);
    if(h1.check(133)) cout<<133<<" is present."<<endl;
    else cout<<"133 is not Found"<<endl;
    if(h1.check(100)) cout<<100<<" is present."<<endl;
    else cout<<"100 is not Found"<<endl;
    if(h1.check(174)) cout<<174<<" is present."<<endl;
    else cout<<"174 is not Found"<<endl;

    HashTable h2(37);
    h2.insert(133);
    h2.insert(88);
    h2.insert(92);
    h2.insert(221);
    h2.insert(174);
    if(h2.check(133)) cout<<133<<" is present."<<endl;
    else cout<<"133 is not Found"<<endl;
    if(h2.check(100)) cout<<100<<" is present."<<endl;
    else cout<<"100 is not Found"<<endl;
    if(h2.check(174)) cout<<174<<" is present."<<endl;
    else cout<<"174 is not Found"<<endl;

    return 0;
}
