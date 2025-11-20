#include <iostream>
using namespace std;
int decimal_to_binary(int n){
    int ans = 0;
    int pow = 1;
    int number = n;
    while(number > 0){
        int rem = number % 2;
        number /= 2;
        ans += rem * pow;
        pow *= 10;
    }
    cout << "Binary of " << n << " is " << ans << endl;
}
int main() {
    for(int i = 1 ; i <= 10 ; i++){
        decimal_to_binary(i);
    }
    cout << endl;
    return 0;
}