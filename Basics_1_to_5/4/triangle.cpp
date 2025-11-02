/*
*
**
***
****
*/

#include <iostream>
using namespace std;

int main() {
    int n = 10;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << "* " ;
        }
        cout << endl;
    }
    return 0;
}

/*
1
22
333
4444
*/
#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}


/*
A
BB
CCC
DDDD
EEEEE
*/
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    char ch = 'A';
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
    return 0;
}


/*
1
12
123
1234
*/
#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout << j << " " ;
        }
        cout << endl;
    }
    return 0;
}