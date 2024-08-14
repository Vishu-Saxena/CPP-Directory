#include <iostream>
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

    // declare bool check[]
    const int N = 1e6 + 2;
    bool check[N];
    for(int i =0; i<N ; i++){
        check[i] = false;
    }

    for(int j =0 ; j < n ; j++){
        if(arr[j] >=0){
            check[arr[j]] = true;
        }
    }

    for(int k = 0 ; k < N; k++){
        if(check[k] == false){
            cout << k << endl;
            return 0;
        }
    }


    return 0;
}