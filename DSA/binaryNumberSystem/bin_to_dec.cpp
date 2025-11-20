#include <iostream>
using namespace std;
int bin_to_deci(int n){
    int ans = 0;
    int pow = 1;
    while (n > 0){
        int rem = n % 10;
        n /= 10;
        ans += rem * pow;
        pow *= 2;
    }
    cout << ans << endl;
}
int main() {
    bin_to_deci(1100101);
    return 0;
}