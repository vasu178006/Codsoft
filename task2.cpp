#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the operation(+,*,-,/)"<<endl;
    cin>>ch;
    int num1,num2;
    cout<<"Enter the numbers to perform operation "<<endl;
    cin>>num1>>num2;
    switch(ch){
        case '+':
            cout<<"The addition of both numbers is "<<num1+num2<<endl;
                break;
        case '-':
            cout<<"The subtraction of both numbers is "<<num1-num2<<endl;
                break;
        case '*':
            cout<<"The Multiplication of both numbers is "<<num1*num2<<endl;
                break;
        case '/':
            cout<<"The Divison of both numbers is "<<num1/num2<<endl;
                break;
        default:
            cout<<"Invalid input"<<endl;
                break;                    
    }
    return 0;
}