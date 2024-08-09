#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

// function to check pythagorian triplet
void pythaTrip(int num1 , int num2 , int num3){
    int hypo = max(num1 , max(num2 , num3));
    if(hypo == num1 &&  hypo*hypo == (num2*num2 + num3*num3)){
        cout<< "Yes it's a Pythagorian triplet"<< endl;
    }else if(hypo == num2 &&  hypo*hypo == (num1*num1 + num3*num3)){
        cout<< "Yes it's a Pythagorian triplet"<< endl;
    }
    else if(hypo == num3 &&  hypo*hypo == (num1*num1 + num2*num2)){
        cout<< "Yes it's a Pythagorian triplet"<< endl;
    }
    else{
        cout << "No It's not" << endl;
    }
}

// funtion to convert binary to decimal
void BinToDec(int binary){
    int dec = 0 ;
    int power = 0;
    while(binary>0){
        int lastDigit = binary%10;
        dec = dec + lastDigit*pow(2 , power);
        power++;
        binary = binary/10;
    }
    cout << dec;
}
// funtion to convert octal to decimal
void OctToDec(int octal){
    int dec = 0 ;
    int power = 0;
    while(octal>0){
        int lastDigit = octal%10;
        dec = dec + lastDigit*pow(8 , power);
        power++;
        octal = octal/10;
    }
    cout << dec;
}

int main(){
    // int a , b , c;
    // cout << "Enter Triplet : ";
    // cin >> a ;
    // cin >> b;
    // cin >> c;
    // cout << a << " " << b << " " << c <<endl;

    // pythaTrip(a , b, c);
    int num;
    cout << "Enter octal number : ";
    cin >> num;
    // BinToDec(num);
    OctToDec(num);
    return 0;
}