//to check a number is prime or not
#include <iostream>
using namespace std;

int main() {
    bool isPrime;
    int n = 7;
    for(int i = 2 ; i < n ; i ++){
        if (n % i == 0){
            isPrime = false;
        }
    }
    if(isPrime){
        cout << "the number is a prime number" << endl;
    }
    else{
        cout << "not prime" << endl;
    }
    return 0;
}