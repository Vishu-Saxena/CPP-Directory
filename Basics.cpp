#include <iostream>
using namespace std;
int main(){

    int a , b;
    cout << "enter first number : "
    cin >> a;
    cout << "enter second number : ";
    cin >> b;

    char op ;
    cout << "enter operator : ";
    cin >> op;

    switch (op)
    {
    case "+":
        cout << a+b << endl;
        break;
    case "-":
        cout << a-b <<endl;
        break;
    default:
        cout <<"this operation is not in system yet.";
        break;
    }
    switch (expression)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }

    return 0;
}
