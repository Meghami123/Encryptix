#include <iostream>
using namespace std;
int main(){
    double num1,num2,result;
    char operation;
    cout<<"enter first number:";
    cin>>num1;
    cout<<"enter second number:";
    cin>>num2;
    cout<<"choose operation(+,-,*,/):";
    cin>>operation;
    switch(operation){
        case '+':result=num1+num2;break;
        case '-':result=num1-num2;break;
        case '*':result=num1*num2;break;
        case '/':if(num2!=0)result=num1/num2;
        else{
            cout<<"error:division by 0isnot allowed."<<endl;
            return 1;
        }
        break;
        default:
        cout<<"invalid operation.please use =,-,*,/"<<endl;
        return 1;
    }
    cout<<"result:"<<result<<endl;
    return 0;
}