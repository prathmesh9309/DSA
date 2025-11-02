/*
1 2 3 4
1 2 3 4 
1 2 3 4
1 2 3 4
*/



#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 1 ; i <= n ; i++){ //outer
        for(int j = 1 ; j <= n ; j++){ //inner
            cout << j << " " ;
        }
        cout << endl;
    }
    return 0;
}





/*
****
****
****
****
*/

#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 0 ; i < n ; i++){
        for(int j = 1; j <= n ; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}



/*
ABCD
ABCD
ABCD
ABCD
*/

#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 0 ; i < n ; i++){
        char ch = 'A';
        for(int j = 0 ; j < n ; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}