#include <iostream>
#include<vector>
using namespace std;

int main() {

    //some of the initialization methods of vector

    // vector<int> vec;
    //  vector <int> vec = {1,2,3};
    //  vector <int> vec(3 , 0);

    // vector<char> vec = {'a' , 'e','i' , 'o' , 'u'};
    //  for(char i : vec){
    //     cout << i << endl;
    //  }
    //  cout << vec.size() << endl;

    vector<int> vec = {};
    vec.push_back(24);
    vec.push_back(22);
    vec.pop_back();
    for(int i : vec){
        cout << i << endl;
    }
    cout << vec.front() << " " << vec.back() << endl;
    return 0; 
}