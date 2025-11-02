#include <iostream>
using namespace std;
void printHello(){
    cout << "Hello" << endl;
}
int main() {
    printHello();
    printHello();
    printHello();
    printHello();
    printHello();
    printHello();
    printHello();
    printHello();
    return 0;
}




//SUm of two

#include <iostream>
using namespace std;
int sumOfTwo(int num1 , int num2){
    return num1 + num2;
}
int main() {
    cout << sumOfTwo(44,24) << endl;
    return 0;
}



// sum of n numbers
#include <iostream>
using namespace std;
int Sum(int n){
    int sum = 0;
    for(int i = 1 ; i <= n ; i++){
        sum += i;
    }
    return sum;
}
int main() {
    cout << Sum(5) << endl;
    return 0;
}






//factorial of a number
#include <iostream>
using namespace std;
int factorial(int n){
    int facto = 1;
    for(int i = 1 ; i <= n ; i++){
        facto *= i;
    }
    return facto;
}
int main() {
    cout << factorial(6) << endl;
    return 0;
}




// sum of digits of a number
// eg - n = 123
// then sum = 6 and return it

#include <iostream>
using namespace std;
int sumOfDigits(int n){
    int sum = 0;
    while(n > 0){
        int rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    return sum;
}
int main() {
    cout << sumOfDigits(123) << endl;
    return 0;
}




//nCr
// nCr = n!/r!(n-r)!
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




