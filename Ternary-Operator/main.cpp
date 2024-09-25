#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter The Value For x" << endl;
    cin >> x;
    int y;
    cout << "Enter The Value For y" << endl;
    cin >> y;
    (x > y) ? cout << x << " is greater than y" << endl : cout << y << " is greater than x" << endl;

    return 0;
}