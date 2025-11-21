#include <iostream>
#include<vector>
using namespace std;
void reverseVec( vector<int>& v ){
    int start = 0;
    int end = v.size()-1;
    while(start < end){
        swap(v[start] , v[end]);
        start++;
        end--;
    }
}
int main() {
    vector<int> v = {1,2,3,4,5,6,7,8,9,-9};
    reverseVec(v);
    for(int val: v){
        cout << val << " " << endl;
    }
    return 0;
}