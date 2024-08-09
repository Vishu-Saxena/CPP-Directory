#include <iostream>
using namespace std;

// funtion for linear search
int linearSearch(int arr[] , int m , int key){
    for(int i =0 ; i<m ; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
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
    int key;
    cout << "enter element to search : ";
    cin >> key;
    cout << "Index of searched element " << linearSearch(arr , len , key) ;
}