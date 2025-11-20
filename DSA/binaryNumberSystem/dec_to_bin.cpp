#include <iostream>
using namespace std;
int deci_to_bin(int n){
    int ans = 0;
    int pow = 1;
    while(n > 0){
        int rem = n % 2;
        n /= 2;
        ans += rem * pow;
        pow *= 10;
    }
    cout << "The binary number is " << ans << endl;
}
int main() {
    for(int i = 1 ; i <= 10 ; i++){
        deci_to_bin(i);
    }
    cout << endl;
    return 0;
}