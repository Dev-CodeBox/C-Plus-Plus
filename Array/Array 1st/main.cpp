#include <iostream>
#include <limits.h>
#include <vector>
#include <algorithm>
using namespace std;


int sumOfElements(int array[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
        cout << sum << " ";
    }
    cout << endl << "Sum Of All Element : " << sum;
    return sum;
}

void traversingAnArray(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return;
}

void reversingAnArray(int array[], int size){
    for (int i = size-1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }
    return;
}

int findTarget(int array_1[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if (array_1[i] == target)
        {
            cout << "Target Found : " << array_1[i] << " ";
            break;
        }
    }
    return target;
}

int occurances(int array_1[], int size){
    int zero = 0;
    int one = 0;
    for (int i = 0; i < size; i++)
    {
        if (array_1[i] == 1)
        {
            one = one + 1;
        }
        if (array_1[i] == 0)
        {
            zero = zero + 1;
        }
    }
    cout << "Number Of 0 : " << zero << endl;
    cout << "Number Of 1 : " << one << endl;
    return one;
}

int findMin(int arr_1[], int size){
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr_1[i] < min)
        {
            min = arr_1[i];
        }
        
    }
    cout << min << " Is Minimum Number";
    return min;
}

int findMAx(int arr_1[], int size){
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr_1[i] > max)
        {
            max = arr_1[i];
        }
    }
    cout << max << " Is Maximum Number";
    return max;
}

void userInput(int array_1[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Elements : " << i << endl;
        cin >> array_1[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << array_1[i] << " ";
    }
    return;
}

void extremePrinting(int array_1[], int size) {
    int j = size-1;
    int i = 0;
    while (i < size && j > 0-1)
    {
        if (array_1[i] == array_1[j])
        {
            cout << array_1[i] << " ";
        }
        if (array_1[i] < array_1[j])
        {
            cout << array_1[i] << " ";
            cout << array_1[j] << " ";
        }
        i++,j--;
    }
    return;
}

void rotateElement(int array_1[], int size){
    for (int i = size-1; i == size-1; i++)
    {
        cout << array_1[i] << " ";
        for (int j = 0; j < size-1; j++)
        {
            cout << array_1[j] << " ";
        }
    }
    return;
}

int twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for(int i = 0; i< n; i++){
        for (int j = i+1; j < n; j++){
            if(nums.at(i) + nums.at(j) == target){
                cout << i << " " << j << endl;
                break;
            }
        }
    }
}

void binarySearch(int arr[], int size, int target){
    int s = 0;
    int e = size-1;
    int mid = s + (e - s)/2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            cout << mid;
            break;
        }else if (arr[mid] < target)
        {
            s = mid + 1;
        }else if (arr[mid] > target)
        {
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ;
}

void firstOccurance(int arr[], int size, int target, int &ansIndex){
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ansIndex = mid;
            e = mid - 1;
        }
        if (arr[mid] < target)
        {
            s = mid + 1;
        }
        if (arr[mid] > target)
        {
            e = mid -1;
        }

        mid = s + (e - s)/2; 
    }
    return ;
}

void lastOccurance(int arr[], int size, int target, int &ansIndex){
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ansIndex = mid;
            s = mid + 1;
        }
        if (arr[mid] < target)
        {
            s = mid + 1;
        }
        if (arr[mid] > target)
        {
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return;
}


void totalOccurances(int arr[], int size, int target){
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;
    int n = 0;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            cout << mid << " " << endl;
            n++;
            e = mid - 1;
        }
        if (arr[mid] < target)
        {
            s = mid + 1;
        }
        if (arr[mid] > target)
        {
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    cout << "Total Number Of Occurances : " << n << endl;
    return;
}


void missing(int arr[], int size){
    for (int i = 0; i < i+1; i++)
    {
        if (arr[i] == i+1)
        {
            continue;
        }else{
            cout << i << arr[i];
            break;
        }
    }
    return;
}

void missinIndex(int arr[], int size){
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;
    int m1 = mid-1;
    int m2  = mid+1;
    while (s <= e)
    {
        if ((arr[mid] == arr[m1]+1) || (arr[mid] == arr[m2] -1))
        {
            continue;
        }else{
            cout << arr[mid] << " ";
            break;
        }
    }
    
    return;
}

void findunique(int arr[], int size){
    int i = 0;
    while (i < size)
    {
        if (i + 1 < size && arr[i] == arr[i + 1])
        {
            i = i + 1;
        }else
        {
            cout << arr[i] << " Is Unique Number" << endl;
        }
        i++;
    }
    return;
}




int main() {
    // vector<int>nums;
    // int target = 5;
    // for (int i = 0; i < 5; i++)
    // {
    //     nums.push_back(i);
    // }
    // cout << nums.size();

    // twoSum(nums,target);

    // int array_1[10];
    int arr[] = {10, 10, 20, 20, 30, 40, 40, 50};
    int size = 8;
    findunique(arr,size);
    // int target = 2;
    // int ansIndex = -1;
    // missinIndex(arr, size);
    // missing(arr, size);
    // totalOccurances(arr,size,target);
    // cout << endl;
    // binarySearch(arr,size,target);
    // cout << endl;
    // userInput(array_1,size);
    // cout << endl;
    // rotateElement(array_1,size);
    // cout << endl;
    // extremePrinting(array_1,size);
    // cout << endl;
    // findTarget(array_1, size, target);
    // cout << endl;
    // findMin(array_1,size);
    // cout << endl;
    // findMAx(array_1,size);
    // sumOfElements(array, size);
    // cout << endl;
    // traversingAnArray(array, size);
    // cout << endl;
    // reversingAnArray(array, size);
    // cout << endl;
    // occurances(array_1,size);
    return 0;
}