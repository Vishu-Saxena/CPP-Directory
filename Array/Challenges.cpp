#include <iostream>
using namespace std;

// function to print max till ith element
void maxTilli(int arr[] , int len){
    int max = arr[0];
    for(int i =0 ; i<len ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        cout << "Maximum element till " << i <<" is "<< max << endl;
    }
}

// function for sum of all subarray
void sumOfSubarry(int arr[] , int len){
     int sum  = 0;
    for(int i = 0; i < len ; i++){
        
        int k = 0 ;
        int rounds = len ;
        while(k < rounds && len>0){
            for(int j =i ; j<=k ; j++){
                sum = sum + arr[j];
            }
            k++;
        }
        rounds--;
    }
    cout << "sum " << sum;
}

void sumOFeachSubarr(int arr[] , int len){
    for(int i = 0; i < len ; i++){
        int sum = 0;
            for(int j =i ; j<len ; j++){
                sum = sum + arr[j];
                cout << sum << endl;
            }
            
        }
        
    

}

// function to find the largest arithmatic subarray
int LagestSubarr(int arr[] , int len){
    int prevDiff= arr[0]-arr[1];
    int lenght = 0;
    int curLenght = 1;
    for(int i =1 ; i<len ; i++){
        int curDiff = arr[i]-arr[i+1];
        if(curDiff == prevDiff){
            curLenght++;
        }else{
            if(curLenght > lenght){
                lenght = curLenght;
                prevDiff = curDiff;
                curLenght =1;
            }
        }
    }
    return ++lenght;
}

// function to find record breaking day
int recordbreakingDay(int arr[] , int len){
    int record = 0;
    int mx = -1;
    for (int i = 0; i < len; i++)
    {
       if(arr[i] > mx && arr[i] > arr[i+1]){
            record++;
            mx = max(mx , arr[i]);
       }
        
    }

    return record;
    
}
int main(){

    int arr[3] = {1,3,2};
    // maxTilli(arr , 6);
    // sumOFeachSubarr(arr , 3);
    int arr2[9] = {1 , 2 ,0 ,7 ,2 ,0 ,2, 2};
    arr2[8] = -1;
    // cout << LagestSubarr(arr2 , 7);
    cout <<  recordbreakingDay(arr2 , 9);

    return 0;
}