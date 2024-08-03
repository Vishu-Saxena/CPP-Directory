#include <iostream>
using namespace std;

int main(){

    // break statement
    // program to print the first prime number greater than N

   int num ;
   cout << "enter the number : ";
   cin >> num;
   int i = num+1;
   
   for(int i = num+1 ; i > num ; i++){
    bool prime = true;
    for(int j = 2 ; j < i ; j++){
        if(i%j == 0){
            prime = false;
            break;
        }
    }
    if(prime){
        cout << i ;
        break;
    }
   }
   
}
