#include <iostream>
using namespace std;
int main() {
    // Size And type Of Information The Variable Will Store.

    // int
    int count = 1;

    // float
    float share = 3.14;

    // char
    char alphabet = 'z';

    // double
    double weight = 55.55555;

    // boolean
    bool isMale = true;

    cout << count << endl << share << endl << alphabet << endl << weight << endl << isMale << endl;

    // For Checking The Memory Storage Taken By integer.
    cout << sizeof count << endl << sizeof share << endl << sizeof alphabet << endl  << sizeof weight << endl << sizeof isMale << endl;
    return 0;
}