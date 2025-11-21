#include <iostream>
#include <vector>
using namespace std;
int linearSearchInVector(const vector<int> &vec, int target)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == target)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int index = linearSearchInVector(vec, 9);
    if( index != -1){
        cout << "found at index " << index << endl;
    }
    else{
        cout << "not found" << endl;
    }
    return 0;
}