#include <iostream>
using namespace std;

// function for Insertion sort
void InsertionSort(int arr[] , int len ){
    for(int i = 1 ; i<len ; i++){
        int current = arr[i];
        int j = i-1;
        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position.
        while(j>=0 && arr[j]>current){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    for(int i=0 ; i<len ; i++){
        cout << arr[i] << " ";
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
    
    return 0;

}