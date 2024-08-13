#include "bits/stdc++.h"
#include <math.h>
using namespace std;

int main(){

    int n;
    cout << "enter array length ";
    cin >> n;
    int arr[n];
    for(int i =0; i<n ; i++){
        cout << "Enter "<< i+1<< " element : ";
        cin >> arr[i];
    }
    const int N = 1e6+2;
    int indx[N];
    for(int i =0; i<N ; i++){
        indx[i] = -1;
    }
    int minIndx = INT_MAX;
    for(int j = 0 ; j<n ; j++){
        if(indx[arr[j]] != -1){
            minIndx = min(minIndx , indx[arr[j]]);
        }else{
            indx[arr[j]] = j;
        }
    }
    if(minIndx == INT_MAX){
        cout << "-1"<<endl;
    }else{
        cout << minIndx << endl;
    }
    return 0;
}