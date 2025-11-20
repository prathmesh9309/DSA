#include<iostream>
using namespace std;

int main(){
    int arr[] = {34,21,67,87,43,12,65,21};
    int smallest = INT16_MAX;
    int index;
    for(int i = 0 ; i < (sizeof(arr) / sizeof(arr[0])) ; i++){
        if(smallest > arr[i]){
            smallest = arr[i];
            index = i;
        }
    }
    cout << "Index for the smallest number is " << index << endl;
    return 0;
}