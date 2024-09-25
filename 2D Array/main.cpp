#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int findMin(int arr_2[][3]){
    int minNum = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr_2[i][j] < minNum)
            {
                minNum = arr_2[i][j];
            }
            // minNum = min(arr_2[i][j],minNum);
        }
        cout << endl;
    }
    cout << minNum << " ";
    return minNum;
}

int rowSum(int arr_2[][3]){
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr_2[i][j];
        }
        cout << sum << endl;
        sum = 0;
    }
    return sum;
}

int colSum(int arr_2[][3]){
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr_2[j][i];
        }
        cout << sum << endl;
        sum = 0;
    }
    return sum;
}

int diagnolSum(int arr_2[][3]){
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr_2[i] == arr_2[j])
            {
                sum = sum + arr_2[i][j];
            }else{
                continue;
            }
        }
    }
    cout << sum << endl;
    return sum;
}


void transpose(int arr_2[][3]){
    int transposed[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposed[i][j] = arr_2[j][i];
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return ;
}


int main() {
    // int arr_1[2][3];
    int arr_2[3][3] = {
        {10, 20, 30},
        {11, 22, 33},
        {12, 24, 36}
    };
    // cout << sizeof(arr_2);
    // transpose(arr_2);
    // cout << endl;
    // diagnolSum(arr_2);
    // cout << endl;
    // colSum(arr_2);
    // cout << endl;
    // rowSum(arr_2);
    // cout << endl;
    // findMin(arr_2);

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == j)
    //         {
    //             cout << "* ";
    //         }else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    
    // // Accessing Element Individually.
    // cout << arr_2[1][1] << " " << endl;

    // // Traversing 2D Array.
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr_2[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "Enter arr_1" << endl;
    //         cin >> arr_1[i][j];
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr_1[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    // vector<vector<int>>arr_3(4, vector<int>(3));
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "Enter Value For : " << i << j << " ";
    //         cin >> arr_3[i][j];
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr_3[i][j] << " ";
    //     }
    //     cout << endl;
    // } 
    

    return 0;
}