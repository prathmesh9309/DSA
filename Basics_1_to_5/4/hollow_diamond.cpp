/*

    *    
   * *   
  *   *  
 *     * 
*       *
 *     * 
  *   *  
   * *   
    *    

*/

#include <iostream>
using namespace std;

int main() {
    int n = 20;

    // Upper half
    for (int i = 0; i < n; i++) {
        // Leading spaces
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        cout << "*";

        // Inner spaces (skip for top point)
        if (i != 0) {
            for (int j = 0; j < (2 * i - 1); j++)
                cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 2; i >= 0; i--) {
        // Leading spaces
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        cout << "*";

        // Inner spaces (skip for bottom point)
        if (i != 0) {
            for (int j = 0; j < (2 * i - 1); j++)
                cout << " ";
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
