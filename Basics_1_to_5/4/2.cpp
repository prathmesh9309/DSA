/*
123
456
789
*/
#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int num = 1;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}



/*
ABC
DEF
GHI
*/
#include <iostream>
using namespace std;

int main() {
    char ch = 'A';
    int n = 3;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << ch << " ";
            ch ++;
        }
        cout << endl;
    }
    return 0;
}