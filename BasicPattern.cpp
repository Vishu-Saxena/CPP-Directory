#include <iostream>
using namespace std;
int main()
{
    /* Rectagular pattern code */
    // int row , col;
    // cout << "enter number of rows : ";
    // cin >> row;
    // cout << "enter number of columns : ";
    // cin >> col;

    // for(int i = 0 ; i< row ; i++){
    //     for(int j = 0 ; j<col ; j++){
    //         cout << "* " ;
    //     }
    //     cout << endl;
    // }
    
    // hollow rectangle pattern
    // int row , col;
    // cout << "enter number of rows : ";
    // cin >> row;
    // cout << "enter number of columns : ";
    // cin >> col;
    // for(int i = 0 ; i<=row ; i++){
    //     for(int j = 0 ; j <= col ; j++){
    //         if(i==0 || i == row){
    //             cout << "* ";
    //         }else{
    //             if(j==0 || j== col){
    //                 cout<< "* ";
    //             }else{ 
    //                 cout << "  ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    // inverted half pyramid
    // int height;
    // cout << "Enter the height of Pyramid : ";
    // cin >> height;
    // for(int i=height ; i >0  ; i--){
    //     for(int j = 0 ; j < i ; j++ ){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // inverted half pyramid after 180deg rotation
    // int height;
    // cout << "Enter the height of Pyramid : ";
    // cin >> height;
    // for(int i = 1 ; i <= height ; i++){
    //     for (int j = 1; j <= height; j++)
    //     {
    //         if(j <= (height-i)){
    //             cout << "  ";
    //         }else{
    //             cout << "* ";
    //         }
            
    //     }
    //     cout<< endl;
    // }

    // promgram to print floyed's triangle
    // int height;
    // cout << "Enter the height of Pyramid : ";
    // cin >> height;
    // int count = 1;
    // for(int i = 1 ; i<= height ; i++){
    //     for(int j = 1 ; j<= i ; j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout << endl;
    // }

    // Butter fly pattern
    int height;
    cout << "Enter the height of Pyramid : ";
    cin >> height;
    for(int i = 1 ; i <= height ; i++){
        for(int j = 1 ; j <= height*2 ; j++ ){
            if(j<=i || j > (height*2-i)){
                cout << "*";
            }else{
                cout<<" ";
            }
        }
        cout<< endl;
    }
    for(int i = height ; i>=1 ; i--){
        for(int j = 1 ; j <= height*2 ; j++ ){
            if(j<=i || j > (height*2-i)){
                cout << "*";
            }else{
                cout<<" ";
            }
        }
        cout<< endl;
    }
    return 0;
}
