#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int arr[7] = {3,-4,5,4,-1,7,-8};
    int maxSum = 0;
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        
        sum += arr[i];
        maxSum = max(sum , maxSum);
        if(sum < 0){
            sum = 0;
        }

    }
    cout << maxSum << endl;
    return 0;
}