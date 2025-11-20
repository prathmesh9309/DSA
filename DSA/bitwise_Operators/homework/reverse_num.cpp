#include <iostream>
using namespace std;
void reverseNumber(int n){
    int pow;
    if(n < 100){
        pow = 10;
    }
    else if(n > 100){
        pow = 100;
    }
    else if(n > 1000){
        pow = 1000;
    }
    int ans = 0;
    while(n > 0){
        int rem = n % 10;
        ans += rem * pow;
        n /=2;
        pow /= 10;
    }
    cout << ans << endl;
}
void revNumberOptimized(int n){
    int ans = 0;
    while(n > 0){
        int digit = n % 10;
        ans = 10 * ans + digit;
        n /= 10;
    }
    cout << ans << endl;
}
int main() {
    reverseNumber(125);
    revNumberOptimized(125);
    return 0;
}