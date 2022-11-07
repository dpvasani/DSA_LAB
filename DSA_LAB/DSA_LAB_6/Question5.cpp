#include<bits/stdc++.h>
#define here cout<<"Here"<<endl 
using namespace std;
vector<string> v(15,"000");


class HashTable{
    public:
    int Key;
    HashTable(int key){
        this->Key = key;
        v.clear();
        v.resize(Key);
    }

    bool check(string s,int a){
        long long int key = Key;
        long long int m = s.length();
        long long int c;
        long long int n=0;
        long long int l = m-1;
        for(int i=0;i<m;i++){
            c = pow(a,l);
            n += ((int)s[i])*c;
            l--;
        }
        int k = n%key;
        if(v[k]==s){
            return true;
        }
        return false;
    }

    void insert(string s,int a){
        bool flag = false;
        long long int key = Key;
        long long int m = s.length();
        long long int c;
        long long int n=0;
        long long int l = m-1;
        for(int i=0;i<m;i++){
            c = pow(a,l);
            n += ((int)s[i])*c;
            l--;
        }
        int k = n%Key;
        v[k] = s;
    }
    void show(string s,int a){
        long long int m = s.length();
        long long int k;
        long long int n=0;
        long long int l = m-1;
        for(int i=0;i<m;i++){
            k = pow(a,l);
            n += ((int)s[i])*k;
            l--;
        }
        cout<<"The polynomial value of "<<s<<" is: "<<n<<endl;
    }
};



int main(){
   
    HashTable h1(17);
    h1.insert("fist",70);
    h1.insert("shift",70);
    h1.insert("sift",70);
    h1.insert("fast",70);
    h1.insert("faster",70);
    h1.insert("shaft",70);
    h1.show("fist",70);
    h1.show("shift",70);
    h1.show("sift",70);
    h1.show("fast",70);
    h1.show("faster",70);
    h1.show("shaft",70);


    // HashTable h2(37);
    // h2.insert(133);
    // h2.insert(88);
    // h2.insert(92);
    // h2.insert(221);
    // h2.insert(174);
    // if(h2.check(133)) cout<<133<<" is present."<<endl;
    // else cout<<"133 is not Found"<<endl;
    // if(h2.check(100)) cout<<100<<" is present."<<endl;
    // else cout<<"100 is not Found"<<endl;
    // if(h2.check(174)) cout<<174<<" is present."<<endl;
    // else cout<<"174 is not Found"<<endl;

    return 0;
}
