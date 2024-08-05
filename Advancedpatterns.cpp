#include <iostream>
using namespace std;

int main()
{
    /* inverted pyramid with number pattern */

    // int height;
    // cout <<"Enter the height : ";
    // cin >> height;

    // for(int i = height ; i >= 1 ; i--){
    //     for(int j = 1 ; j <= i ; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // } 

    // 0-1 pattern pyramid
    // int height;
    // int fill;
    // cout <<"Enter the height : ";
    // cin >> height;
    // for(int i=1 ; i<= height ; i++ ){
    //     fill = 1;
    //     if(i%2 != 0){
    //         for(int j = 1 ; j<= i ; j++ ){
    //             cout << fill;
    //             fill = fill ? 0 : 1;
    //         }
    //     }
    //     else{
    //         fill = 0;
    //         for(int j = 1 ; j<= i ; j++ ){
    //             cout << fill;
    //             fill = fill ? 0 : 1;
    //         }
    //     }
    //     cout << endl;
    // }
    
    // // rhombus pattern
    // int height;
    // cout <<"Enter the height : ";
    // cin >> height;
    // for(int i = 1 ; i<=height ; i++){
    //     for(int j = i ; j < height ; j++){
    //         cout << " ";
    //     }
    //     for(int j = 1 ; j <= height ; j++){
    //         cout<< " * ";
    //     }

    //     cout << endl;
    // }

    int height;
    cout <<"Enter the height : ";
    cin >> height;

    for(int i = 1 ; i<=height ; i++){
        for(int j = 1 ; j<= (height-i) ; j++){
            cout << " ";
        }
        for(int j = 1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
