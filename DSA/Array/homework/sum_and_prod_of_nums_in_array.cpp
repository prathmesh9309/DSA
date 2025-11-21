#include <iostream>
using namespace std;
void sumAndProdOfArray(int arr[] , int size){
    int sum = 0;
    int prod = 1;
    for(int i = 0 ; i < size ; i ++){
        sum += arr[i];
        prod *= arr[i];
    }
    cout << "Sum of the all elements in the array is " << sum << " and it's product is " << prod << endl;
}
int main() {
    int arr[] = {4,3,1,7};
    sumAndProdOfArray(arr , 4);
    return 0;
}