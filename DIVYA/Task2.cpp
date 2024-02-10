#include<iostream>
using namespace std;

int main()
{
    double num1,num2,result;
    char operation,a;
    do{
cout<<"Program for Calculator\n";

cout<<"Enter first number\n";
cin>>num1;
cout<<"Enter second number\n";
cin>>num2;
cout<<"Choose Operation(+,-,/,*):";
cin>>operation;
switch(operation)
{
    case '+':
    result=num1+num2;
    break;
    case '-':
    result=num1-num2;
    break;
    case '/':
    if(num2!=0) {
    result=num1/num2;
    }else{
        cout<<"Error:Division by 0 is not possible";
        return 1;
    }
    break;
    case '*':
    result=num1*num2;
    break;
    default:
    cout<<"Error:Invalid Operation\n";
    return 1;
}
cout<<"Result:"<<result<<endl;
cout<<"Do you want to continue?(Y|N)";
cin>>a;
}while(a=='Y'||a=='y');
cout<<"Thank You!!";
return 0;

}