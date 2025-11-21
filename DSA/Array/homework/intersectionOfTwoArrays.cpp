#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {3,4,5,6,7,8};
    //to print the unique values in the two arrays;
    for(int i = 0 ; i < (sizeof(arr1)/sizeof(arr1[0])) ; i++){
        for(int j = 0 ; j < (sizeof(arr2)/sizeof(arr2[0])) ; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << endl;
                break;
            }   
        }   
    }
    return 0;
}