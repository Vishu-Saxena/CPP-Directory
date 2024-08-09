#include <iostream>
using namespace std;

// function for buuble sort
void bubbleSort(int arr[] , int len ){
    for(int i =1 ; i<len ; i++){
        for(int j = 0; j<len-i ; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int j= 0 ; j<len ; j++){
        cout << arr[j]<<" ";
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
    bubbleSort(arr , len);

}