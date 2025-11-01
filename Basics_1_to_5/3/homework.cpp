// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the value of n:";
//     cin >> n;
//     int sum = 0 ;
//     for(int i = 1 ; i <= n ; i ++){
//         if( i % 3 == 0){
//             sum += i;
//         }
//     }
//     cout << sum << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long facto = 1;
    for(int i = 1; i <= n ; i++){
        facto *= i;
    }
    cout << facto << endl;
    return 0;
}