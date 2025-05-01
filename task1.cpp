#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int random =rand() % 10 + 1;
    int num;
    do{
        cout<<"Enter your guess!! "<<endl;
        cin>>num;
        if(num>random){
            cout<<"The number you guessed is grater than the actual number!.Try again"<<endl;
        }
        if(num<random){
            cout<<"The number you guessed is smaller than the actual number!.Try again"<<endl;
        }
    }while(num!=random);
    cout<<"Congratulations you guessed the number "<<num<<endl;
    return 0;
}