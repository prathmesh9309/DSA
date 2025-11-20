#include <iostream>
using namespace std;

int main() {
    // int marks[5] = {11,22,33,44,55};
    // float price[] = {11,22,33,44,55,66,77,88};
    // cout << marks[6] << endl;
    // for(int i= 0 ; i < sizeof(marks)/sizeof(marks[0]) ; i++){
    //     cout << marks[i] << endl;
    // }

    //smallest and the largest element in the array
    int arr[5] = {22,45,78,36,5};
    int smallest = INT16_MAX;
    // or also you can use smallest = arr[0] or any other assumption;
    for(int i =  0 ; i < sizeof(arr) / sizeof(arr[0]) ; i++){
        // if(arr[i] < smallest){
        //     smallest = arr[i];
        // }
        // another optimized option is 
        smallest = min(arr[i] , smallest);
    }
    cout << "smallest is " << smallest << endl;
    return 0;
}