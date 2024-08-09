#include <iostream>
using namespace std;

// function for binary search
int binarySearch(int arr[] , int len , int key){
    int start = 0;
    int end = len-1;
    int mid = (start+end)/2;
    // cout << "mid "<< mid<< endl;
    while(end >= start){
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            end = mid-1;
            mid = (start+end) /2;
        }else{
            start = mid + 1;
            mid = (start+end) /2;
        }
    }
    return -1 ;
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
     
     cout << binarySearch(arr , len , key) ;
    return 0;
}