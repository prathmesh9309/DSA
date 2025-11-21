#include <iostream>
using namespace std;

int main() {
    //printing all the unique values in an array
    int arr[] = {1,2,2,3,4,4,4,4,5,6,7,8,8,8,8,9};
    for(int i = 0 ; i < sizeof(arr)/sizeof(arr[0]) ; i++){
        bool found = false;
        for(int j = i + 1 ; j < sizeof(arr)/sizeof(arr[0]) ; j ++){
            if(arr[i] == arr[j]){
                found = true;
                break;
            }
        }
        if(!found){
            cout << arr[i] << endl;
        }
    }
    return 0;
}
