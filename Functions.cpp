#include <iostream>
using namespace std;

// function to find all prime number between any two given prime number
int prime(int num){
    bool prim = true;
    for(int k = 2 ; k <num  ; k++){
        if(num%k == 0){
            prim = false;
            break;
        }
    }
    if(prim){
        cout << num<< " ";
    }
}

void primeNumbers(int a, int b){
    if(a>b){
        for(int i=b+1 ; i<a ; i++){
            prime(i);
        }
    }else{
        for(int i = a+1 ; i < b ; i++){
            prime(i);
        }
    }
}

// function to find fibbonaci series
void FbSeries(int n){
    int first = 0 ;
    int second = 1;
    for(int i = 1 ; i<=n ; i++){
        if(i == 1){
            cout<< first << " ";
        }else if(i == 2){
            cout << second << " ";
        }else{
            int temp = first;
            cout << first + second << " ";
            first = second;
            second = temp + second;
        }
    }
}

// fucntion to print pascal triangle

int factorial(int n){
    int fact= 1;
    for(int i = 2 ; i<=n ; i++){
        fact = fact*i;
    }
    return fact;
}

void pascalTriangle(int len){
    for(int i=0 ; i<len ; i++){
        for(int j = 0 ; j<=i ; j++){
            cout << factorial(i)/(factorial(j)*factorial(i-j)) << " ";
        }
        cout << endl;
    }
}

int main(){
    // primeNumbers(115,10);
    // FbSeries(10);
    pascalTriangle(5);
    return 0;
}