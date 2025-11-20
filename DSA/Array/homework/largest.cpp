#include<iostream>
using namespace std;

int main(){
    int arr[] = {34,21,67,87,43,12,65,21};
    int largest = INT16_MIN;
    int index;
    for(int i = 0 ; i < (sizeof(arr) / sizeof(arr[0])) ; i++){
        if(largest < arr[i]){
            largest = arr[i];
            index = i;
        }
    }
    cout << "Index for the largest number is " << index << endl;
    return 0;
}