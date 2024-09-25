#include <iostream>
using namespace std;
int main() {
    // if Statement

    int age;
    cout << "Enter Your Age" << endl;
    cin >> age;
    if (age > 18)
    {
        cout << "Eligible To Drive" << endl;
    }

    // if else Statement

    float height;
    cout << "Enter Yopur Height" << endl;
    cin >> height;
    if (height > 5.5)
    {
        cout << "You Are Taller" << endl;
    }
    else
    {
        cout << "You Are Short" << endl;
    }
    
    // if elseif else

    int marks;
    cout << "Enter Your Marks" << endl;
    cin >> marks;
    if (marks >= 90)
    {
        cout << "A++" << endl;
    }
    else if (marks >= 75)
    {
        cout << "B++" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
    
    // Nested if / if else / if elseif else Statement
    float bodyHeight;
    cout << "Enter Your Body-Height" << endl;
    cin >> bodyHeight;
    cout << bodyHeight << endl;
    if (height > 5.5)
    {
        float weight;
        cout << "Enter Your Weight" << endl;
        cin >> weight;
        cout << weight << endl;
        if (weight > 70)
        {
            cout << "You Can Be A Boxer" << endl;
        }
        else
        {
            cout << "Get Some Weight" << endl;
        }
        
    }
    else
    {
        cout << "You Are Short" << endl;
    }

    // switch case Statement

    char grade;
    cout << "Enter your Grade" << endl;
    cin >> grade;
    switch (grade)
    {
    case 'A': cout << "A++";
        break;
    case 'B': cout << "B++";
        break;
    case 'C': cout << "C++";
        break;
    default: cout << "F++" << endl;
        break;
    }
    
    return 0;
}