
// #include <iostream>
// using namespace std;

// int main() {
//     cout << "prathmesh badhe";
    
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     cout << "PRATHMESH\n" << "BADHE" ;
//     return 0;
// }



// VARIABLES
// #include <iostream>
// using namespace std;

// int main() {
//     int age;
//     age = 20;
//     char grade = 'A';
//     float PI = 3.14f;
//     bool isSafe = true;
//     double num = 100.999;
//     cout << age << endl;
//     return 0;
// }





//IMPLICIT CONVERSION
// #include <iostream>
// using namespace std;

// int main() {
//     char grade = 'A';
//     int value = grade;
//     cout << value << endl;
//     return 0;
// }





// Explcit typecasting
// #include <iostream>
// using namespace std;

// int main() {
//     double price = 100.99;
//     int newPrice = (int)price;
//     cout << newPrice << endl;
//     return 0;
// } 









// Taking input 
// #include <iostream>
// using namespace std;

// int main() {
//     int age;
//     cout << "Enter the age";
//     cin >> age;
//     cout << "your age is " << age << endl;
//     return 0;
// }














// Operators in cpp
// #include <iostream>
// using namespace std;




// Arithematic operators
// int main() {
//     int a = 5;
//     int b = 10;
//     int sum = a + b;
//     int diff = a - b;
//     int prod = a * b;
//     int div = a / b;
    
//     cout << sum << endl;
//     cout << diff << endl;
//     cout << prod << endl;
//     cout << div << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     cout << (5 / 2) << endl;
//     cout << (5/(float)2) << endl;
//     return 0;
// }







// RELATIONAL OPERATORS
// #include <iostream>
// using namespace std;

// int main() {
//     cout << (3 < 5) << endl;
//     cout << (3 > 5) << endl;
//     cout << (3 <= 5) << endl;
//     cout << (3 >= 5) << endl;
//     cout << (3 != 5) << endl;
//     cout << (3 != 3) << endl;
//     return 0;
// }









//Logical operators
// OR ||
// AND &&
// NOT !
#include <iostream>
using namespace std;

int main() {
    cout << !(3 < 5) << endl;
    cout << ((3 > 1) || (3 >4)) << endl;
    cout << ((3 > 1) && (3 < 4)) << endl;
    return 0;
}