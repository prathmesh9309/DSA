#include <iostream>
using namespace std;
void swapMaxMinOfAnArray(int arr[] , int size){
    int maxElem =0;
    int minElem =0;
    for(int i = 1 ; i < size ; i++){
        if(arr[i] > arr[maxElem]){
            maxElem = i;
        }
        if(arr[i] < arr[minElem]){
            minElem = i;
        }
    }
    swap(arr[maxElem] , arr[minElem]);
    cout << "Swapping completed" << endl;
}
void printArr(int arr[] , int size){
    for(int i=0 ; i < size ; i++){
        cout <<  arr[i] << endl;
    }
}
int main() {
    int arr[] = {52,15,67,2,6,37,84,31};
    swapMaxMinOfAnArray(arr , 8);
    printArr(arr , 8);
    return 0;
}