// with loop
//  without loop using the bits << >>
#include <iostream>
using namespace std;
void isPowerOfTwoUsingLoop(int n)
{
    while (n % 2 == 0)
    {
        n /= 2;
    }
    if (n == 1)
    {
        cout << "It is the power of two" << endl;
    }
    else
        cout << "it is not power of two" << endl;
}
void isPowerOfTwoUsingBits(int n){
    
}
int main()
{
    isPowerOfTwoUsingLoop(40);
    return 0;
}