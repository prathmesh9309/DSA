#include <iostream>
using namespace std;
int linearSearch(int arr[] , int size , int target){
    for(int i = 0 ; i <size ; i++){
        if(target == arr[i]){
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {4,2,7,8,1,2,5};
    cout << linearSearch(arr ,7 ,8 ) << endl;
    return 0;
}