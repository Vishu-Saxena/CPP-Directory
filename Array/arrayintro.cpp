#include <iostream>
using namespace std;




int main(){
    int len;
    cout << "enter the lenght of array : ";
    cin >> len;
    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    int arr[len];
    for(int i=1 ; i<=len ; i++){
        cout <<"enter " << i << " element :";
        cin >> arr[i-1];
    }
    for(int i=0 ; i<len ; i++ ){
        cout << arr[i]<< ' ';
        maxNo = max(maxNo , arr[i]);
        minNo = min(minNo , arr[i]);
    }
    cout << endl;
    cout << minNo << " " <<maxNo;

}