#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    first();
    return 0;
}
void first(){
    second();
    cout<<"I am the first"<<endl;
}
void second(){
    third();
    cout<<"I am the second"<<endl;
}
void third(){
    fourth();
    cout<<"I am the third"<<endl;
}
void fourth(){
    cout<<"I am the fourth"<<endl;
}