#include <iostream>
#include <cmath>
using namespace std;
int main(){

    // int a , b;
    // cout << "enter first number : "
    // cin >> a;
    // cout << "enter second number : ";
    // cin >> b;

    // char op ;
    // cout << "enter operator : ";
    // cin >> op;

    // switch (op)
    // {
    // case "+":
    //     cout << a+b << endl;
    //     break;
    // case "-":
    //     cout << a-b <<endl;
    //     break;
    // default:
    //     cout <<"this operation is not in system yet.";
    //     break;
    // }
    // switch (expression)
    // {
    // case /* constant-expression */:
    //     /* code */
    //     break;
    
    // default:
    //     break;
    // }

    // program to check whether a given number is prime or not

    // int num ;
    // cout << "Enter number : ";
    // cin >> num;
    // bool prime = true;

    // for(int i=2 ; i<=sqrt(num) ; i++){
    //     if(num % i== 0){
    //         prime = false;
    //         break;
    //     }
    // }
    // prime ? cout<<"prime " : cout<< "non prime";

    // program to reverse a number 
    // int num ;
    // cout << "Enter number : ";
    // cin >> num;
    // int revnum;
    
    // while(num>0){
    //     int lastDigit = num%10;
    //     revnum = revnum*10 + lastDigit;
    //     num = num/10;
    // }
    // cout << revnum;

    // program to code armstrong number
    int num ;
    cout << "Enter number : ";
    cin >> num;
    
    int dumy = num;
    int armstrng = 0;;
    while (dumy>0)
    {
        armstrng= armstrng + (dumy%10)*(dumy%10)*(dumy%10);
        dumy = dumy/10;
    }
    armstrng == num ? cout << "Armstrong" : cout <<" Not an Armstrong.";
    


    return 0;
}
