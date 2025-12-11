#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int s, a;
    cin >> s >> a;
    if (a >= 19)
    {
        if(s == 0)
        {
            cout << "MAN"; 
        }
        else
        {
            cout << "WOMAN";
        }
    }
    else
    {
        if(s == 0)
        {
            cout << "BOY";
        }
        else
        {
            cout << "GIRL";
        }
    }
    return 0;
}