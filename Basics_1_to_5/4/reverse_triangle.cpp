/*
1
21
321
4321
*/

#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j > 0 ; j--){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}





//floyd's triangle
/*
1
23
456
78910
*/

#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int num = 1;
    for(int i = 0 ; i < n ; i++){
        for( int j = 0 ; j <= i ; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}



/*
A
BA
CBA
DCBA
*/

#include <iostream>
using namespace std;

int main() {
    int n = 4;
    for(int i = 1 ; i <= n ; i++){
        for(int j = i ; j > 0 ; j--){
            cout << char('A' + j - 1);
        }
        cout << endl;
    }
    return 0;
}

