#include <iostream>
using namespace std;

// function for Insertion sort
void InsertionSort(int arr[] , int len ){
    for(int i = 1 ; i<len ; i++){
        for(int j = i-1 ; j >= 0 ; j--){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    InsertionSort(arr , len);
    for(int i=0 ; i<len ; i++){
        cout << arr[i] << " ";
    }
    return 0;

}