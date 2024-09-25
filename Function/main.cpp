#include <iostream>
using namespace std;

// Void Function Defination And Declaration
void countingNumbers() { // Printing Count from 1 To 100!
    for (int i = 1; i <= 100; i++)
    {
        cout << i << endl;
    }
}

float simpleInterst(float p, float r, float t) { //Finding Simple Interest!
    float si = (p * r * t) / 100;
    cout << endl;
    return si;
}

void votingEligibility() {
    int age;
    cout << "Enter Your Age" << endl;
    cin >> age;
    if (age >= 18)
    {
        cout << "Eligible To Vote" << endl;
    }
    else
    {
        cout << "Not Eligible To Vote" << endl;
    }
}

void primePrinting() {
    for (int i = 2; i <= 100; i++)
    {
        if (i % 1 == 0 && (i % i == i))
        {
            cout << i << " Is Prime Number" << endl;
        }
        else
        {
            cout << i << " Is Not Prime Number" << endl;
        }   
    }
}

int multiplication() {
    int i, j;
    cout << "Input 1st-Number" << endl;
    cin >> i;
    cout << "Input 2nd-Number" << endl;
    cin >> j;
    int multiple = i * j;
    cout << multiple;
    return multiple;
}

int main() {

    // Function Call

    countingNumbers();
    
    cout << simpleInterst(10, 20, 30) << endl;

    votingEligibility();

    primePrinting();

    multiplication();

    
    return 0;
}