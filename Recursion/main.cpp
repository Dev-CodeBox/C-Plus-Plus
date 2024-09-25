#include <iostream>
#include <algorithm>
#include <limits.h>
#include <vector>
using namespace std;

int power(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int recursion = power(n - 1);
    int pow = 2 * recursion;
    return pow;
}

int fibonacii(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int recursive = fibonacii(n - 1) + fibonacii(n - 2);
    return recursive;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int recursive = sum(n - 1);
    int ans = n + recursive;
    return ans;
}

void printArray(int arr[], int size, int index)
{
    if (index == size)
    {
        return;
    }
    cout << arr[index] << " ";
    printArray(arr, size, index + 1);
}

void search(int arr[], int size, int index, int target)
{
    if (index == size)
    {
        return;
    }
    if (arr[index] == target)
    {
        cout << index << " ";
    }
    search(arr, size, index + 1, target);
}

void findMax(int arr[], int size, int index, int &maxo)
{
    if (index == size)
    {
        cout << maxo << " ";
    }
    maxo = max(arr[index], maxo);
    findMax(arr, size, index + 1, maxo);
}

void findMin(int arr[], int size, int index, int &mini)
{
    if (index == size)
    {
        cout << mini << " ";
    }
    mini = min(arr[index], mini);
    findMax(arr, size, index + 1, mini);
}

void allOdd(int arr[], int size, int index)
{
    if (index == size)
    {
        return;
    }
    if (arr[index] % 2 == 1 || arr[index] & 1)
    {
        cout << arr[index] << " ";
    }
    allOdd(arr, size, index + 1);
}

void allEven(int arr[], int size, int index)
{
    if (index == size)
    {
        return;
    }
    if (arr[index] % 2 == 0 || !(arr[index] & 1))
    {
        cout << arr[index] << " ";
    }
    allEven(arr, size, index + 1);
}

void allEven(int arr[], vector<int> &v, int size, int index)
{
    if (index == size)
    {
        return;
    }
    if (arr[index] % 2 == 0)
    {
        v.push_back(arr[index]);
    }
    allEven(arr, v, size, index + 1);
}

void binarySearch(int arr[], int size, int start, int end, int mid, int target)
{
    if (start > end)
    {
        return;
    }
    if (arr[mid] == target)
    {
        cout << mid << " ";
    }
    else if (arr[mid] < target)
    {
        return binarySearch(arr, size, mid + 1, end, start + (end - start) / 2, target);
    }
    else if (arr[mid] > target)
    {
        return binarySearch(arr, size, start, mid - 1, start + (end - start) / 2, target);
    }
}

bool sortedArray(int arr[], int size, int index)
{
    if (index == size)
    {
        return true;
    }
    if (arr[index] < arr[index + 1])
    {
        return true;
    }
    sortedArray(arr, size, index + 1);
}

int main()
{
    // vector<int> v;
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    cout << sortedArray(arr, size, index);

    // int target = 80;
    // int start = 0;
    // int end = size - 1;
    // int mid = start + (end - start) / 2;
    // binarySearch(arr, size, start, end, mid, target);
    // allEven(arr, v, size, index);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // allOdd(arr, size, index);
    // int mini = INT_MAX;
    // int maxo = INT_MIN;
    // findMin(arr, size, index, mini);
    // findMax(arr, size, index, maxo);
    // search(arr, size, index, target);
    // printArray(arr, size, index);
    // cout << sum(10) << endl;
    // cout << fibonacii(10) << endl;
    // cout << power(10) << endl;
    return 0;
}
