#include<iostream>
using namespace std;
int main(){

    // char ch[10];
    // cin >> ch;
    // // cin.getline(ch, 10, '\n');
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << ch[i];
    // }



    string str = "Badadyad";
    string str2 = "ad";

    // cout << str[0];
    // str.erase(str[0], str[3]);
    // cout << str;

    // for(int i = 0; i < str.length(); i++){
    //     if (str.find(str2) == true)
    //     {
    //         str.erase(str2.begin(),str2.end());
    //     }
    // }
    if (str.find(str2) != string::npos)
    {
        str.erase(str2.begin() + str2.length());
        cout << "hey";
    }
    cout << str;
    
    return 0;
}