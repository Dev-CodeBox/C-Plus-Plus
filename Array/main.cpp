#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    // Creation Of An Array.
    // Array Initialization.it cant be done without passing size.

    int array_0[5]; // It will Store Garbage Value in 5 blocks.
    cout << array_0 << endl;

    int array_1[5] = {1, 2, 3}; // It Will Store 0 In last to block.
    cout << array_1[1] << endl;

    int array_2[5] = {2, 4, 6, 8, 10};
    cout << array_2[2] << endl;

    /* We Can't Print Every Elements Of At a time using Index value it wil be very lenthy Process. 
    So, We Will Use Loop To Print Araays Elements. */

    // Array Traversing.

    for (int i = 0; i < 5; i++)
    {
        cout << array_2[i] << " ";
    }

    // Printing To The Next Line.
    cout << endl;

    // Array Reversing.
    for (int i = 5-1; i >= 0; i--)
    {
        cout << array_2[i] << " ";
    }

    // Printing To The Next Line.
    cout << endl;

    // Creating Array Via Loop Taking Input;
    int array_3[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter array_3 :";
        cin >> array_3[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << array_3[i] << " ";
    }
    
    // Fill Function.
    int arr[5];
    fill(arr, arr+5, 10);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    // Max Function.
    int array[5] = {2, 4, 6, 8, 10};
    int maxiumNum = 0;
    for (int i = 0; i < 5; i++)
    {
        maxiumNum = max(array[0],array[1]);
    }
    cout << endl << "Maximum Number Is : " << maxiumNum << endl;;

    // Swap Function.
    int a = 5;
    int b = 10;
    cout << "Before Swapping : " << a << endl;
    cout << "Before Swapping : " << b << endl;
    swap(a,b);
    cout << "After Swapping : " << a << endl;
    cout << "After Swapping : " << b << endl;

    // vector.
    vector<int>v;
    for (int i = 0; i < 5; i++)
    {
        int vdata;
        cout << "Enter vdata" << endl;
        cin >> vdata;
        v.push_back(vdata);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " " << v.capacity()  << " " << v.size() << " ";
    }



    return 0;
}