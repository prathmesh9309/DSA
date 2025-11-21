// binary to decimal and decimal to binary conversion
#include <iostream>
using namespace std;
void binaryToDecimal(int n){
    int ans = 0;
    int pow = 1;
    while(n > 0){
        int rem = n % 10;
        ans += rem * pow;
        pow *= 2;
        n /= 10;
    }
    cout << "The binary to decimal conversion is :" << ans << endl;
}
void decimalToBinary(int n){
    int ans = 0;
    int pow = 1;
    while(n > 0){
        int rem = n % 2;
        ans += rem * pow;
        pow *= 10;
        n /= 2;
    }
    cout << "The decimal to binary conversion is :" << ans << endl;
}
int main() {
    binaryToDecimal(1010);
    decimalToBinary(10);
    
    return 0;
}