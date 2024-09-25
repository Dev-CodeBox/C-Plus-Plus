#include <iostream>
using namespace std;
int main(){
    int sum = 0;


    int i = 0;
    while (i <= 5)
    {
        sum = sum + i;
        i = i + 1;
    }
    
    cout << sum;


    return 0;
}