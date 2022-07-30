#include<iostream>
using namespace std;
int main(){
    unsigned  long long int temp=0,num1=0,num2=1,num;
    cout<<"Enter Number :-  ";
    cin>>num;
    cout<<"Fibonacci Series is: \n"<<num1<<" "<<endl;
    for(int i=1;i<=num-2;i++){
        temp=num1+num2;
        num1=num2;
        num2=temp;
        cout<<temp<<endl;
        if(num1==0){
            cout<<num1;
        }
        if(num2==1){
            cout<<num2<<endl;
        }
    }
    return 0;
}
