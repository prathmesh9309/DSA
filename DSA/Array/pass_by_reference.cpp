// pass by reference demonstration
#include <iostream>
using namespace std;
void changeArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[] = {3, 4, 5};
    changeArr(arr, 3);
    printArr(arr , 3);
    return 0;
}