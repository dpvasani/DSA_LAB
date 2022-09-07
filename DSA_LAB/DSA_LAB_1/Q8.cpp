#include<bits/stdc++.h>
using namespace std;
string rev(string s,int num,string s1){
    if(num==-1){
        return s1;
    }
    s1.push_back(s[num]);
    return rev(s,--num,s1);
}
int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    cout<<rev(s,s.size(),"");
    return 0;
}
