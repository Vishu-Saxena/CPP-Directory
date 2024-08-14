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

    int sum;
    cout << "enter sum : ";
    cin >> sum;

    int start=0 ;
    int end =0 ;
    int fsum = 0;
    while(end < n && (fsum + arr[end]) <= sum){
        cout << "Heloo from here";
        fsum = fsum + arr[end];
        end++;
    }

    if(fsum == sum){
        cout << start << " " << --end << endl;
        return 0;
    }else{
        while(end < n){
            fsum += arr[end];
            end++;
            while(fsum > sum)
            {
                fsum -= arr[start];
                start++;
            }
            if(fsum == sum){
                cout << start << " " << end << --endl;
                return 0;
            }
        }
    }
   
}