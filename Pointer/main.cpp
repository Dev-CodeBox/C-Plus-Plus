#include <iostream>
using namespace std;

void solve(int *arr, int size)
{
    cout << sizeof(arr) << endl;
}

int main()
{

    int arr[3] = {1, 2, 3};
    int size = 3;
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]) << endl;

    solve(arr, size);
    return 0;
}