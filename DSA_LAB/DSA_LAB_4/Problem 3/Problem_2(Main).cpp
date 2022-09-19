#include "Universal_Stack.cpp"
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string expression) 
{
    // Write your code here
    stack <char> s;
    
    for(int i = 0; expression[i] != '\0'; i++){
        if(expression[i] == '[' || expression[i] == '(' || expression[i] == '{'){
            s.push(expression[i]);
        }
        if(s.empty() && (expression[i] == ']' || expression[i] == ')' || expression[i] == '}')){
            return false;
        }
        
        if(expression[i] == ']'){
            if(s.top() == '['){
                s.pop();
            }
            else{
                return false;
            }
        }
        
        if(expression[i] == ')'){
            if(s.top() == '('){
                s.pop();
            }
            else{
                return false;
            }
        }
        
        if(expression[i] == '}'){
            if(s.top() == '{'){
                s.pop();
            }
            else{
                return false;
            }
        }
        
       
    }
     if(s.empty()){
            return true;
        }
        
        return false;
}


int main() 
{
    string input;
    getline(cin, input);
    cout << ((isBalanced(input)) ? "true" : "false");
}