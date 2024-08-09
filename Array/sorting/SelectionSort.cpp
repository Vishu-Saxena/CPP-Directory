#include <iostream>
using namespace std;
#include <climits>

// function for selection sort
void selectionSort(int arr[] , int len){
    for(int i =0 ; i<len ; i++){
        for(int j= i+1 ; j<len ; j++){
            if(arr[j] <arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] =temp;
            }
        }
    }

    for(int i = 0 ; i < len ; i++){
        cout << arr[i]<< " ";
    }
}

int main(){
    int len;
    cout <<"Enter the length of array : ";
    cin >> len;
    int arr[len];
    for(int j =0 ; j<len ; j++){
        cout <<"Enter the "<<j+1 << " elment of array ";
        cin >> arr[j];
    }
    selectionSort(arr , len);
}