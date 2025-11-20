//using two pointer approach
#include <iostream>
using namespace std;
void reverseArray(int arr[] , int size){
    
    int start = 0 ;
    int end = size -1;
    while(start < end){
        swap(arr[start] , arr[end]);
        start++;
        end --;
    }
}
void reverseARRAY(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = size - 1; j >= 0; j--) {
            if (i < j && j == size - 1 - i) {
                swap(arr[i], arr[j]);
                break;
            }
        }
    }
}
void printArr(int arr[] , int size){
    for(int i= 0 ; i < size ; i++){
        cout << arr[i] << endl;
    }
}
int main() {
    int arr[] = {31,15,241,656,58,366};
    reverseArray(arr , 6);
    printArr(arr , 6);
    return 0;
}