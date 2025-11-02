/*
1111
 222
  33
   4
*/

#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 0 ; i < n ; i++){
        for(int k = 0 ; k <i ; k++){
            cout << " ";
        }
        for(int j = 0 ; j < n-i ; j++ ){
            cout << (i+1);
        }
        cout << endl;
    }
    return 0;
}


/*
   1
  121 
 12321
1234321 
*/

#include <iostream>
using namespace std;

int main() {
    int n = 8;
    for(int i = 0 ; i < n ; i++){

        //spaces
        for(int j = 0 ; j < (n-i-1) ; j++){
            cout << " ";
        }
        //nums 1
        for(int k = 1 ; k <= (i + 1) ; k++){
            cout << k;
        }
        //nums 2
        for(int m = i ; m > 0 ; m--){
            cout << m;
        }
        cout << endl;
        
    }
    return 0;
}
