#include<iostream>
using namespace std; 
int main(){
    int a,b;
    char opr;
    cout<<"Enter the expression: a and b are operands and opr is operator (+,-,*,/): ";
    cin>>a>>opr>>b;
    cout<<"The postfix form is "<<a<<b<<opr;
}