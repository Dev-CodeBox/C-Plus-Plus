#include <iostream>
using namespace std;
int main() {
    // For Loop
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }
    // While Loop
    int x = 0;
    while (x < 5)
    {
        cout << x << endl;
        x++;
    }
    // Do-While Loop
    int a = 0;
    do
    {
        cout << a << endl;
        a++;
    } while (a < 5);
    // Nested Loop
    for (int m = 0; m <= 2; m++)
    {
        for (int n = 0; n <= 2; n++)
        {
            cout << m << n << " ";
        }
        cout << endl;
    }
    
    return 0;
}