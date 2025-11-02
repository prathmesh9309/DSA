#include <iostream>
using namespace std;
int nCr(int n , int r){
    int nFacto = 1;
    for(int i = 1; i <= n ; i++){
        nFacto *= i;
    }
    int rFacto = 1;
    for(int i = 1; i <= r ; i++){
        rFacto *= i;
    }
    int nMinusrFacto = 1;
    for(int i = 1 ; i <= (n-r) ; i++){
        nMinusrFacto *= i;
    }
    int result = nFacto/rFacto * (nMinusrFacto);
    return result;
}
int main() {
    cout << nCr(6,2) << endl;
    return 0;
}