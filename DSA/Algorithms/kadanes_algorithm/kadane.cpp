// maximum possible sub array's
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5;
//     int arr[] = {3,2,6,5,9};
//     for(int start = 0 ; start < n ; start++){
//         for(int end = start ; end < n ; end++){
//             for(int i = start ; i <= end ; i++){
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }





// maximum subarray sum
// brute force approach
#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int arr[7] = {3,-4,5,4,-1,7,-8};
    int maxSum = 0;
    for(int start = 0 ; start < n ; start ++){
        int currSum = 0;
        for(int end = start ; end < n ; end++){
            currSum += arr[end];
            maxSum = max(currSum ,maxSum);
        }
    }
    cout << maxSum << endl;
    return 0;
}




//Kadane's algorithm 
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